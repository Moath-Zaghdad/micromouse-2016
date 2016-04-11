#ifndef MOTION_CALC_H
#define MOTION_CALC_H

class MotionCalc {
  private:
    float max_accel, max_decel;
    float vStart, vEnd, vMax;
    float dStart, dEnd, dTot;
    float aStart, aEnd;
    int32_t tStart, tConst, tEnd;

  public:
    MotionCalc (float temp_dTot, float temp_vMax, float temp_vStart, float temp_vEnd,
                float temp_max_accel, float temp_max_decel);
    
    float idealDistance(int32_t elapsedTime);
    float idealVelocity(int32_t elapsedTime);
    float idealAccel(int32_t elapsedTime);
    int32_t getTotalTime();
};

#endif
