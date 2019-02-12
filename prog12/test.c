#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    FILE *fp1,*fp2,*fp3;
    char *line1 = NULL,*line2 = NULL;
    size_t len = 0;
    size_t n1read=0,n2read=0;
    
   fp1 = fopen("file1", "r");
   fp2 = fopen("file2", "r");
   fp3 = fopen("file3", "w");
    if ((fp1 == NULL)|| (fp1 == NULL)){
        exit(EXIT_FAILURE);
    }
   while ((-1!=(n1read=getline(&line1, &len, fp1))) && (-1!=(n2read=getline(&line2, &len, fp2)))) {
        while('\n'==line1[n1read-1]){
                line1[n1read-1]= ' ';
        }
        fputs(line1,fp3);
        fputs(line2,fp3);

        /*
        fwrite(line1,n1read,1,fp3);
        fwrite(line2,n2read,1,fp3);
        */
    }
 /**/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    free(line1);
    free(line2);
    fclose(fp1);
    fclose(fp2);
    return;
}
