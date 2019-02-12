//prog12

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(int argc, char const *argv[])
{
    FILE *fptr1,*fptr2,*fptr3;
    char str[100];

    if(4!=argc){
        printf("Wrong number of arguments\n");
        exit(EXIT_FAILURE);
    }

    //creating integer file(file1) and string file(file2)

    fptr1=fopen(argv[1],"w+");
    fptr2=fopen(argv[2],"w+");
    fptr3=fopen(argv[3],"w");
     if(NULL==fptr1 || NULL==fptr2 || NULL==fptr3){
            printf("Error in opening the file\n");
            exit(EXIT_FAILURE);
        }

    //entering data into both the files

    //entering integes in file1
    memset(str,0,100);
    printf("Enter the integer\n");
	printf("To stop entering, press Ctrl+d\n");
	while(NULL!=fgets(str,79,stdin))
	{	
		fputs(str,fptr1);
	}

    //entering string in file2
    memset(str,0,100);
    printf("Enter the text\n");
	printf("To stop entering, press Ctrl+d\n");
	while(NULL!=fgets(str,79,stdin))
	{	
		fputs(str,fptr2);
	}

    fseek(fptr1,0,SEEK_SET);
    fseek(fptr2,0,SEEK_SET);

    //merging file1 and file 2 in file3

    char *line1 = NULL,*line2 = NULL;
    size_t len = 0;
    size_t n1read=0,n2read=0;

   while ((-1!=(n1read=getline(&line1, &len, fptr1))) && (-1!=(n2read=getline(&line2, &len, fptr2)))) {
        while('\n'==line1[n1read-1]){
                line1[n1read-1]= ' ';
        }
        fputs(line1,fptr3);
        fputs(line2,fptr3);
    }  

    free(line1);
    free(line2);
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
        
    return;
}
