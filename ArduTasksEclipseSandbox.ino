//#include <GSSArduTasks.h>

#include "LedBlinkTask.h"

LedBlinkTask blinkTask;

Task* tasks[] = {NullTask, &blinkTask};
const uint8_t numTasks = 2;
long nextTaskTime[numTasks];

RUNTIME
