#include <stdio.h>
float convert_data(float,char,char);//Function prototype
int main()//main function
{
    float value,result;//declare variables
    char unit_from,unit_to;
    printf("Enter value which you want to convert:");
    scanf("%f",&value);//input of value from user
    printf("Enter unit from which you want to convert(b/B/K/M/G/T/P/E):");
    scanf("\n%c",&unit_from);//input of unit_from from user
    printf("Enter unit to which you want to convert(b/B/K/M/G/T/P/E):");
    scanf("\n%c",&unit_to);//input of unit_to from user
    result=convert_data(value,unit_from,unit_to);
    if(result==0)
        printf("Invalid unit or value or it cannot be convert.\n");
    else
        printf("%.20f %c is equal to %.20f %c.\n",value,unit_from,result,unit_to);

}
  float convert_data(float value,char unit_from,char unit_to)//function call
{
    switch(unit_from){
    case 'b':
      switch(unit_to){
    case 'b':
      return value;//bit to bit
    case 'B':
      return value/8;//bit to byte
    case 'K':
        return value/(8*1024);//bit to kilobyte
    case 'M':
        return value/(8*1024*1024);//bit to megabyte
    case 'G':
        return value/(8LL*1024*1024*1024);//bit to gigabyte
    case 'T':
        return value/(8LL*1024*1024*1024*1024);//bit to terabyte
    case 'P':
        return value/(8LL*1024*1024*1024*1024*1024);//bit to pentabyte
    case 'E':
         return value/(8LL*1024*1024*1024*1024*1024*1024);//bit to exabyte
    default:
        return 0;
    }
    case 'B':
    switch(unit_to){
    case 'b':
        return value*8; //byte to bit
    case 'B':
        return value; //byte to byte
    case 'K':
        return value/1024;//byte to kilobyte
    case 'M':
        return value/(1024*1024); //byte to megabyte
    case 'G':
        return value/(1024*1024*1024); //byte to gigabyte
    case 'T':
        return value/(1024LL*1024*1024*1024);//byte to terabyte
    case 'P':
        return value/(1024LL*1024*1024*1024*1024);//byte to pentabyte
    case 'E':
        return value/(1024LL*1024*1024*1024*1024*1024);//byte to exabyte
    default:
        return 0;
            }
    case 'K':
        switch(unit_to) {

    case 'b':
        return value*8*1024;//kilobyte to bit
    case 'B':
        return value*1024;//kilobyte to byte
    case 'K':
        return value;//kilobyte to byte
    case 'M':
        return value/1024;//kilobyte to megabyte
    case 'G':
        return value/(1024*1024);//kilobyte to gigabyte
    case 'T':
        return value/(1024LL*1024*1024);//kilobyte to terabyte
    case 'P':
        return value/(1024LL*1024*1024*1024);//kilobyte to pentabyte
    case 'E':
        return value/(1024LL*1024*1024*1024*1024);//kilobyte to exabyte
    default:
        return 0;
            }
     case 'M':
        switch(unit_to){
    case 'b':
        return value*8*1024*1024;//Megabye to bit
    case 'B':
        return value*1024*1024;//Megabye to byte
    case 'K':
        return value*1024;//Megabye to kilobyte
    case 'M':
        return value;//Megabye to megabyte
    case 'G':
        return value/1024;//Megabye to gigabyte
    case 'T':
        return value/(1024LL*1024);//Megabye to terabyte
    case 'P':
        return value/(1024LL*1024*1024);//Megabye to pentabyte
    case 'E':
        return value/(1024LL*1024*1024*1024);//Megabye to exabyte
            default:
                return 0;
            }
    case 'G':
        switch(unit_to){
    case 'b':
        return value*8*1024*1024*1024;//Gigabyte to bit
    case 'B':
        return value*1024*1024*1024;//Gigabyte to byte
    case 'K':
        return value*1024*1024;//Gigabyte to kilobyte
    case 'M':
        return value*1024;//Gigabyte to megabyte
    case 'G':
        return value;//Gigabyte to gigabyte
    case 'T':
        return value/1024LL;//Gigabyte to terabyte
    case 'P':
        return value/(1024LL*1024);//Gigabyte to pentabyte
    case 'E':
        return value/(1024LL*1024*1024);//Gigabyte to exabyte
    default:
            return 0;
            }
    case 'T':
        switch(unit_to){
    case 'b':
        return value*8*1024*1024*1024*1024;//terabyte to bits
    case 'B':
        return value*1024*1024*1024*1024;//terabyte to bytes
    case 'K':
        return value*1024*1024*1024;//terabyte to kilobytes
    case 'M':
        return value*1024*1024;//terabyte to megabytes
    case 'G':
        return value*1024;//terabyte to gigabytes
    case 'T':
        return value;//terabyte to terabytes
    case 'P':
        return value/1024LL;//terabyte to pentabytes
    case 'E':
        return value/(1024LL*1024);//terabyte to exabytes
    default:
            return 0;
            }
    case 'P':
     switch(unit_to) {
    case 'b':
      return value*8*1024*1024*1024*1024*1024;//pentabytes to bits
    case 'B':
      return value*1024*1024*1024*1024*1024;//pentabytes to bytes
    case 'K':
      return value*1024*1024*1024*1024;//pentabytes to kilobytes
    case 'M':
      return value*1024*1024*1024;//pentabytes to megabytes
    case 'G':
      return value*1024*1024;//pentabytes to gigabytes
    case 'T':
      return value*1024LL;//pentabytes to terabytes
    case 'P':
      return value;//pentabytes to pentabytes
    case 'E':
       return value/1024LL;//pentabytes to exabytes
    default:
        return 0;

    }

        case 'E':
            switch(unit_to) {
        case 'b':
            return value*8*1024*1024*1024*1024*1024*1024;//exabytes to bits
        case 'B':
            return value*1024*1024*1024*1024*1024*1024;//exabytes to bytes
        case 'K':
            return value*1024*1024*1024*1024*1024;//exabytes to kilobytes
        case 'M':
            return value*1024*1024*1024*1024;//exabytes to megabytes
        case 'G':
            return value*1024*1024*1024;//exabytes to gigabytes
        case 'T':
            return value*1024LL*1024;//exabytes to terabytes
        case 'P':
            return value*1024LL;//exabytes to pentabytes
        case 'E':
            return value;//exabytes to exabytes
            default:
                return 0;
            }
        default:
            return 0;
    }

}
