#include<cstdio>
using namespace std;


int
main(int argc,char* argv[])
{
  for(unsigned char i=0;i<=255;i++){
    if(i==255){
      printf("\nASCII[%d]:=%c\n",i,i);
      break;
    }
    printf("\nASCII[%d]:=%c",i,i);
  }
  return 0;
}
