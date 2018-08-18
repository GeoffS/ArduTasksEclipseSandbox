#pragma once
/*
 * LedBlinkTask.h
 *
 *  Created on: Aug 16, 2018
 *      Author: Geoff
 */

#include <Arduino.h>
#include <GSSArduTasks.h>

class LedBlinkTask : public Task
{
  public:
    void setup()
    {
      pinMode(LED_BUILTIN , OUTPUT);
    }

    long loop(long currTime_ms)
    {
      digitalWrite(LED_BUILTIN, nextState);
      Serial.print("LED ");
      Serial.println(nextState != HIGH ? "Off" : "On");

      if (nextState != HIGH) nextState = HIGH;
      else                   nextState = LOW;

      return currTime_ms + 500;
    }

    bool needsSerial() { return true; }

  private:
    uint8_t nextState = HIGH;
};



