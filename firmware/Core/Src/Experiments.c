#include "fatfs.h"

#include "error_handler.h"
#include "Experiments.h"

FATFS fs;

void Experiment_exp1(void)
{
error_handler_throw_if_fail(f_mount(&fs, "", 0) == FR_OK);
  
  FIL testFile;
  error_handler_throw_if_fail(f_open(&testFile, "hello.txt", FA_OPEN_ALWAYS | FA_READ) == FR_OK);
  
  // read file contents
  char fileBuffer[128];
  memset(fileBuffer, '\0', sizeof(fileBuffer));
  size_t totalBytesRead = 0;
  size_t currentTransactionBytesRead = 0;
  while (currentTransactionBytesRead = f_gets(fileBuffer, sizeof(fileBuffer), &testFile)) {

    totalBytesRead += currentTransactionBytesRead;
    printf(fileBuffer);
    memset(fileBuffer, '\0', sizeof(fileBuffer));
  }
  
  error_handler_throw_if_fail(f_close(&testFile));

  f_unlink
}
