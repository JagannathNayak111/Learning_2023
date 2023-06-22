/*1. File Copy: Write a C program to copy a file using file operations*/
#include <stdio.h>


FILE *openFile(const char *fileName, const char *mode)
{
   FILE *file = fopen(fileName, mode);
   if (file == NULL)
   {
      printf("Unable to open the file or file not found: %s\n", fileName);
      return NULL;
   }
   return file;
}


void closeFile(FILE *file)
{
   fclose(file);
}


void copyFile(const char *sourceFileName, const char *destinationFileName)
{
   
   FILE *sourceFile = openFile(sourceFileName, "r");
   if (sourceFile == NULL)
   {
      return;
   }

   
   FILE *destinationFile = openFile(destinationFileName, "w");
   if (destinationFile == NULL)
   {
      closeFile(sourceFile);
      return;
   }

   char ch;
   
   while ((ch = fgetc(sourceFile)) != EOF)
   {
      fputc(ch, destinationFile);
   }

   printf("File copied successfully.\n");

   
   closeFile(sourceFile);
   closeFile(destinationFile);
}

int main()
{
   char sourceFileName[100], destinationFileName[100];

   printf("Enter the source file name: ");
   scanf("%s", sourceFileName);

   printf("Enter the destination file name: ");
   scanf("%s", destinationFileName);

   
   copyFile(sourceFileName, destinationFileName);

   return 0;
}