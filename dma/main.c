#include<stdio.h>
#include<stdlib.h>

int main()
{
  int size;
  char *text = NULL;

  printf("Enter the string size:");
  scanf("%d",&size);

  text = (char *)malloc(size*sizeof(char));

  if(text != NULL)
  {

    printf("Enter some text: \n");
    scanf(" ");
    fgets(text,size,stdin);

    printf("Inputed text is: %s\n",text);

  }
  free(text);
  text = NULL;
  return 0;





}
