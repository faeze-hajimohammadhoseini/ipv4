#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <stdbool.h>


char txt[20];

bool isCorrect(int n){

    if(n==3){
       //printf("%s . %i   ",txt,n);
                if(txt[0]=='0'||txt[0]=='1'||(txt[0]=='2'&&(txt[1]=='0'||txt[1]=='1'||txt[1]=='2'||txt[1]=='3'||txt[1]=='4'||(txt[1]==5&&(txt[2]=='0'||txt[2]=='1'||txt[2]=='2'||txt[2]=='3'||txt[2]=='4'||txt[2]=='5'))))){

            return 1;
        }
        else{
            return 0;
        }
    }

    return 1;
}


int main(){

char Str[25];
int istr1=0,istr2=0,istr3=0,istr4=0,sum;


scanf("%s", Str);



for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        for(int h=1;h<=3;h++){
            for(int g=1;g<=3;g++){
                if(i+j+h+g==strlen(Str)){
                    istr1=0;
                    istr2=0;
                    istr3=0;
                    istr4=0;

                    int f=h;
                    char str1[i+1];
                    char str2[j+1];
                    char str3[h+1];
                    char str4[g+1];


                    //printf("%s  %i      ",str3,h);

                    for(int l=1;l<=i;l++){
                        str1[istr1++]=Str[l-1];
                    }
                    for(int l=1;l<=j;l++){
                        str2[istr2++]=Str[i+l-1];
                      //  printf("%c", str2[istr2]);
                    }
                    //printf("\n");
                    for(int l=1;l<=h;l++){
                        str3[istr3++]=Str[i+j+l-1];
                    }
                    for(int l=1;l<=g;l++){
                        str4[istr4++]=Str[i+j+h+l-1];
                    }

                   // puts(str2);

                    if((str1[0]!='0'||i==1)&&(str2[0]!='0'||j==1)&&(str3[0]!='0'||h==1)&&(str4[0]!='0'||g==1)){
                        strcpy(txt,str1);
                        if(isCorrect(i)==true){
                            strcpy(txt,str2);
                            if(isCorrect(j)==true){
                                strcpy(txt,str3);
                                if(isCorrect(h)==true){
                                    strcpy(txt,str4);
                                    if(isCorrect(g)==true){
                                        for(int l=0;l<i;l++){
                                            printf("%c",str1[l]);
                                        }
                                        printf(".");
                                        for(int l=0;l<j;l++){
                                            printf("%c",str2[l]);
                                        }
                                        printf(".");
                                        for(int l=0;l<h;l++){
                                            printf("%c",str3[l]);
                                        }
                                        printf(".");
                                        for(int l=0;l<g;l++){
                                            printf("%c",str4[l]);
                                        }
                                        printf("\n");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

return 0;
}
