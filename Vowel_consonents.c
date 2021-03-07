//WAP to count number of vowels, consonents,numbers,symbols in a string.
#include <stdio.h>
int main()
{
  char name[100];
  int v=0,c=0,i=0,n=0,s=0;
  printf("Enter any word");
  gets(name);
  printf("\nYour word is %s",name);
  while(name[i]!='\0')
  {
    if((name[i]>='A'&&name[i]<='Z') || (name[i]>='a'&&name[i]<='z'))
    {
      switch(name[i])
      {
        case'A':
          case'E':
            case'I':
              case'O':
                case'U':
                  case'a':
                    case'e':
                      case'i':
                        case'o':
                          case'u':
                            v++;
                            break;
                            default:
                              c++;
      }
    }
    else if(name[i]>='0'&&name[i]<='9')
     { 
       n++;
     
    }
    
    else
    s++;
    
    i++;
  }
  printf("\n  Vowel=%d  \nconsonents=%d  \nsymbols=%d  \nnumbers=%d ",v,c,s,n);
  return 0;
}