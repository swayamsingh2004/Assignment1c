#include <stdio.h>
int main(){
    int a,b,c,d,x;
    printf("Enter the max 4 digit number:");
    scanf("%d", &x);


    a=x/1000;
    int y=x%1000;
    b=y/100;
    int z=y%100;
    c=z/10;
    d=z%10;

    switch (a){
    case 0: printf(" ");
    break;
    case 1: printf("one thousand ");
    break;
    case 2: printf("two thousand ");
    break;
    case 3: printf("three thousand ");
    break;
    case 4: printf("four thousand ");
    break;
    case 5: printf("five thousand ");
    break;
    case 6: printf("six thousand ");
    break;
    case 7: printf("seven thousand ");
    break;
    case 8: printf("eight thousand ");
    break;
    case 9: printf("nine thousand ");
    break;}

    switch (b){
     case 0: printf(" ");
     break;
     case 1: printf("one hundred ");
     break;
     case 2: printf("two hundred ");
     break;
     case 3: printf("three hundred ");
     break;
     case 4: printf("four hundred ");
     break;
     case 5: printf("five hundred ");
     break;
     case 6: printf("six hundred ");
     break;
     case 7: printf("seven hundred ");
     break;
     case 8: printf("eight hundred ");
     break;
      case 9: printf("nine hundred ");
     break;
    }
       switch (c){
        case 0: printf(" ");
        break;
        switch(d){
        case 0: printf(" ");
        break;
        
        case 1: printf("eleven ");
        break;
        case 2: printf("twelve ");
        break;
        case 3: printf("thirteen ");
        break;
        case 4: printf("fourteen ");
        break;
        case 5: printf("fifteen ");
        break;
        case 6: printf("sixteen ");
        break;
       case 7: printf("seventeen ");
        break;
        case 8: printf("eightteen ");
        break;
        case 9: printf("nineteen ");
        break;
        }
        
  
            break;
             case 2: printf("twenty ");
            break;
            case 3: printf("thirty ");
            break;
            case 4: printf("forty ");
            break;
            case 5: printf("fifty ");
            break;
            case 6: printf("sixty ");
            break;
            case 7: printf("seventy ");
            break;
            case 8: printf("eighty ");
            break;
            case 9: printf("ninty ");
            break;}
      
    if(c==1){
        printf(" ");
    }
    else {
    switch (d){
        case 0: printf(" ");
        break;
        case 1: printf("one ");
        break;
        case 2: printf("two ");
        break;
        case 3: printf("three ");
        break;
        case 4: printf("four ");
        break;
        case 5: printf("five ");
        break;
        case 6: printf("six ");
        break;
        case 7: printf("seven ");
        break;
        case 8: printf("eight ");
        break;
        case 9: printf("nine ");
        break;}

} 
  return 0;
}
