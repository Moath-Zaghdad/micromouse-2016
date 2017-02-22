#ifndef WHEEL_H
#define WHEEL_H

#include "../device/MotorModel.h"
#include "../device/Encoder.h"
#include "PIDFunction.h"
#include "Profile.h"

namespace Motion {

struct WheelOptions
{
  PIDParameters pid_parameters;
};

class Wheel
{
  public:
    Wheel(WheelOptions options, MotorModel &motor, Encoder &encoder);

    LengthUnit displacement();

    void reference(LinearPoint point);
    LinearPoint reference() const;

    void update(TimeUnit time);

    void transition();

  private:
    MotorModel &motor_;
    Encoder &encoder_;

    PIDFunction pid_;

    LinearPoint reference_ = {
      LengthUnit::zero(), LengthUnit::zero(), LengthUnit::zero()
    };
};

}

#endif
