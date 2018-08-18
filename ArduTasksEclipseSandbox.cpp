#include <Arduino.h>
#include <GSSArduTasks.h>

#include "LedBlinkTask.h"

LedBlinkTask blinkTask;

TASK_LIST(NullTask, &blinkTask)
