#include<stdio.h>
#include<stdlib.h>


#define BUF_SIZE 256


int read_file(char *fname, int *buffer, int writeSize);
int write_file(char *, int *, int);
int sort(int *buffer, int size);


int main()
{
  //FILE *file1, *file2;
  char *filename1 = "file1.txt";
  char *filename2 = "file2.txt";
  int *buf = (int *)malloc(BUF_SIZE);
  int i;
  int data_rSize, data_wSize;

  // Read file
  data_rSize = read_file(filename1, buf, BUF_SIZE);
  if(data_rSize) puts("Read OK!");
  else 
  {
    puts("Read error!");
    return 0;
  }

  //for(i=0;i<data_rSize;i++,buf++) printf("%d ", *buf);
  
	// Sort data
  sort(buf, data_rSize);

  // Write to file
  data_wSize = write_file(filename2, buf, data_rSize);
  if(data_wSize) puts("Write OK!");
  else 
  {
    puts("Write error!");
    return 0;
  }

  free(buf);

  return 0;
}


int read_file(char *fname, int *buffer, int readSize)
{
  int i = 0;
  FILE *file;
  
  if(!(file = fopen(fname, "r")))
  {
    puts("Cant read file !");    
    return 0;
  } 
  
  for(;(fscanf(file, "%d", buffer+i)!=EOF) && (i<readSize);i++){};

  fclose(file);
  
  return i;
}


int write_file(char *fname, int *buffer, int writeSize)
{
  int i = 0;
  FILE *file;
  
  if(!(file = fopen(fname, "w")))
  {
    puts("Cant create file !");    
    return 0;
  }

  for(;i<writeSize;i++) fprintf(file,"%d ",*(buffer+i));
  
  fclose(file);

  return 1;
}

int sort(int *buffer, int size)
{
  int i,j,tmp;

  for(j=0;j<size-1;j++)
  {  
    for(i=0;i<size-1;i++)
    {
      if(*(buffer+i) < *(buffer+i+1))
      { 
        tmp = *(buffer+i);
        *(buffer+i) = *(buffer+i+1);
        *(buffer+i+1) = tmp; 
      } 
    }
  }
  
  return 1;
}


