#include<stdio.h>
#include"func.h"


int main()
{
	int n, s_size, write_size, read_size;
	char *fname = "list.bin"; 

  enum ACTIONS{ADD,DELETE,SEARCH,VIEW,EXIT};
  struct Person man;
  
	while(1)
	{
    StartMenu();
		scanf("%d",&n);

		switch(n)
		{
			case ADD:
        write_size = writeFile(fname,&man,s_size);
        break;
      
			case DELETE:
				break;

		  case SEARCH:
				break;

			case VIEW:
	      read_size = readFile(fname,&man,s_size);
				break;

			case EXIT:
				return 0;

			default:
				puts("Incorrect enter !");
				break;

		}
	}
	//enterData(&man);

  //s_size = sizeof(man);
  //write_size = writeFile(fname,&man,s_size);
	//read_size = readFile(fname,&man,s_size);


	return 0;
}
