/*Data Viewer:
Write an application to view the log stored in data.csv
Example, say you have the following data in data.csv

------------------------------------

EntryNo,sensorNo,Temperature,Humidity,Light,

1,S1,36.5,100,50,10:30:50
2,S3,30,100,50,10:30:55
3,S2,-6.6,100,10,10:31:00
------------------------------------

a. Write a function to extract each line in the .csv file and store it in an array of structures. 

b. Also implement functions to display the contents of the array of structures.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

// Structure
typedef struct
{
   int entryNo;
   char sensorNo[3];
   char date[11];
   char time[9];
   int light;
   int temperature;
   int humidity;
} LogEntry;

LogEntry logEntries[MAX_ENTRIES];
int numEntries = 0;

void extractDataFromFile(const char *filename)
{
   FILE *file = fopen(filename, "r");
   if (file == NULL)
   {
      printf("Failed to open the file.\n");
      return;
   }

   char line[256];
   fgets(line, sizeof(line), file);

   
   while (fgets(line, sizeof(line), file) != NULL)
   {
      LogEntry entry;
      sscanf(line, "%d,%[^,],%[^,],%[^,],%d,%d,%d",
             &entry.entryNo, entry.sensorNo, entry.date, entry.time,
             &entry.light, &entry.temperature, &entry.humidity);
      logEntries[numEntries++] = entry;
   }

   fclose(file);
}


void displayLogEntry(int entryNo)
{
   int found = 0;
   for (int i = 0; i < numEntries; i++)
   {
      if (logEntries[i].entryNo == entryNo)
      {
         printf("EntryNo\tSensorNo\tDate\t\tTime\t\tLight\tTemperature\tHumidity\n");
         printf("--------------------------------------------------------------------\n");
         LogEntry entry = logEntries[i];
         printf("%d\t%s\t\t%s\t%s\t%d\t%d\t\t%d\n",
                entry.entryNo, entry.sensorNo, entry.date, entry.time,
                entry.light, entry.temperature, entry.humidity);
         found = 1;
         break;
      }
   }
   if (!found)
   {
      printf("No log entry with EntryNo %d found.\n", entryNo);
   }
}


void displayAllLogEntries()
{
   if (numEntries == 0)
   {
      printf("No log entries available.\n");
      return;
   }

   printf("EntryNo\tSensorNo\tDate\t\tTime\t\tLight\tTemperature\tHumidity\n");
   printf("--------------------------------------------------------------------\n");

   for (int i = 0; i < numEntries; i++)
   {
      LogEntry entry = logEntries[i];
      printf("%d\t%s\t\t%s\t%s\t%d\t%d\t\t%d\n",
             entry.entryNo, entry.sensorNo, entry.date, entry.time,
             entry.light, entry.temperature, entry.humidity);
   }
}

int main()
{
   const char *filename = "data.csv";
   extractDataFromFile(filename);

   int choice;
   printf("Select an option:\n");
   printf("1. Display all log entries\n");
   printf("2. Display a specific log entry\n");
   printf("Enter your choice: ");
   scanf("%d", &choice);

   
   if (choice == 1)
   {
      displayAllLogEntries();
   }
   
   else if (choice == 2)
   {
      int entryNo;
      printf("Enter the EntryNo: ");
      scanf("%d", &entryNo);
      displayLogEntry(entryNo);
   }
   
   else
   {
      printf("Invalid choice. Exiting...\n");
   }

   return 0;
}