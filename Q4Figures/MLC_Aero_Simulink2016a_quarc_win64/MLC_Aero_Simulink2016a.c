/*
 * MLC_Aero_Simulink2016a.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "MLC_Aero_Simulink2016a".
 *
 * Model version              : 1.113
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Apr 27 16:35:57 2018
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MLC_Aero_Simulink2016a.h"
#include "MLC_Aero_Simulink2016a_private.h"
#include "MLC_Aero_Simulink2016a_dt.h"

/* Block signals (auto storage) */
B_MLC_Aero_Simulink2016a_T MLC_Aero_Simulink2016a_B;

/* Continuous states */
X_MLC_Aero_Simulink2016a_T MLC_Aero_Simulink2016a_X;

/* Block states (auto storage) */
DW_MLC_Aero_Simulink2016a_T MLC_Aero_Simulink2016a_DW;

/* Real-time model */
RT_MODEL_MLC_Aero_Simulink201_T MLC_Aero_Simulink2016a_M_;
RT_MODEL_MLC_Aero_Simulink201_T *const MLC_Aero_Simulink2016a_M =
  &MLC_Aero_Simulink2016a_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 14;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  MLC_Aero_Simulink2016a_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void MLC_Aero_Simulink2016a_output(void)
{
  /* local block i/o variables */
  real_T rtb_HILReadTimebase_o1[2];
  real_T rtb_HILReadTimebase_o2[2];
  real_T rtb_HILReadTimebase_o3[4];
  real_T rtb_LEDColour[3];
  real_T temp;
  int_T ci;
  int8_T rtAction;
  static const int8_T jc[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7
  };

  if (rtmIsMajorTimeStep(MLC_Aero_Simulink2016a_M)) {
    /* set solver stop time */
    if (!(MLC_Aero_Simulink2016a_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&MLC_Aero_Simulink2016a_M->solverInfo,
                            ((MLC_Aero_Simulink2016a_M->Timing.clockTickH0 + 1) *
        MLC_Aero_Simulink2016a_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&MLC_Aero_Simulink2016a_M->solverInfo,
                            ((MLC_Aero_Simulink2016a_M->Timing.clockTick0 + 1) *
        MLC_Aero_Simulink2016a_M->Timing.stepSize0 +
        MLC_Aero_Simulink2016a_M->Timing.clockTickH0 *
        MLC_Aero_Simulink2016a_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(MLC_Aero_Simulink2016a_M)) {
    MLC_Aero_Simulink2016a_M->Timing.t[0] = rtsiGetT
      (&MLC_Aero_Simulink2016a_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_SubsysRanB);

  /* Reset subsysRan breadcrumbs */
  srClearBC(MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem_Subsy);

  /* Reset subsysRan breadcrumbs */
  srClearBC(MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem1_Subs);

  /* Reset subsysRan breadcrumbs */
  srClearBC(MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem2_Subs);
  if (rtmIsMajorTimeStep(MLC_Aero_Simulink2016a_M)) {
    /* S-Function (hil_read_timebase_block): '<S7>/HIL Read Timebase' */

    /* S-Function Block: MLC_Aero_Simulink2016a/Uncertain Plant/Plant/HIL Read Timebase (hil_read_timebase_block) */
    {
      t_error result;
      result = hil_task_read(MLC_Aero_Simulink2016a_DW.HILReadTimebase_Task, 1,
        &rtb_HILReadTimebase_o1[0],
        &MLC_Aero_Simulink2016a_DW.HILReadTimebase_EncoderBuffer[0],
        NULL,
        &rtb_HILReadTimebase_o3[0]
        );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
      } else {
        rtb_HILReadTimebase_o2[0] =
          MLC_Aero_Simulink2016a_DW.HILReadTimebase_EncoderBuffer[0];
        rtb_HILReadTimebase_o2[1] =
          MLC_Aero_Simulink2016a_DW.HILReadTimebase_EncoderBuffer[1];
      }
    }
  }

  /* SignalGenerator: '<Root>/Pitch Reference ' */
  temp = MLC_Aero_Simulink2016a_P.PitchReference_Frequency *
    MLC_Aero_Simulink2016a_M->Timing.t[0];
  if (temp - floor(temp) >= 0.5) {
    MLC_Aero_Simulink2016a_B.PitchReference =
      MLC_Aero_Simulink2016a_P.PitchReference_Amplitude;
  } else {
    MLC_Aero_Simulink2016a_B.PitchReference =
      -MLC_Aero_Simulink2016a_P.PitchReference_Amplitude;
  }

  /* End of SignalGenerator: '<Root>/Pitch Reference ' */

  /* SignalGenerator: '<Root>/Yaw Reference' */
  temp = MLC_Aero_Simulink2016a_P.YawReference_Frequency *
    MLC_Aero_Simulink2016a_M->Timing.t[0];
  if (temp - floor(temp) >= 0.5) {
    MLC_Aero_Simulink2016a_B.YawReference =
      MLC_Aero_Simulink2016a_P.YawReference_Amplitude;
  } else {
    MLC_Aero_Simulink2016a_B.YawReference =
      -MLC_Aero_Simulink2016a_P.YawReference_Amplitude;
  }

  /* End of SignalGenerator: '<Root>/Yaw Reference' */
  if (rtmIsMajorTimeStep(MLC_Aero_Simulink2016a_M)) {
    /* Gain: '<S7>/Counts to rads' */
    MLC_Aero_Simulink2016a_B.Countstorads[0] =
      MLC_Aero_Simulink2016a_P.Countstorads_Gain[0] * rtb_HILReadTimebase_o2[0];
    MLC_Aero_Simulink2016a_B.Countstorads[1] =
      MLC_Aero_Simulink2016a_P.Countstorads_Gain[1] * rtb_HILReadTimebase_o2[1];

    /* Outputs for Atomic SubSystem: '<S7>/Pitch Bias Removal' */
    /* Step: '<S15>/Step: end_time' */
    temp = MLC_Aero_Simulink2016a_M->Timing.t[1];
    if (temp < MLC_Aero_Simulink2016a_P.PitchBiasRemoval_end_time) {
      MLC_Aero_Simulink2016a_B.Stepend_time =
        MLC_Aero_Simulink2016a_P.Stepend_time_Y0;
    } else {
      MLC_Aero_Simulink2016a_B.Stepend_time =
        MLC_Aero_Simulink2016a_P.Stepend_time_YFinal;
    }

    /* End of Step: '<S15>/Step: end_time' */

    /* Step: '<S15>/Step: start_time' */
    if (MLC_Aero_Simulink2016a_M->Timing.t[1] <
        MLC_Aero_Simulink2016a_P.PitchBiasRemoval_start_time) {
      temp = MLC_Aero_Simulink2016a_P.Stepstart_time_Y0;
    } else {
      temp = MLC_Aero_Simulink2016a_P.Stepstart_time_YFinal;
    }

    /* End of Step: '<S15>/Step: start_time' */

    /* Outputs for Enabled SubSystem: '<S15>/Enabled Moving Average' incorporates:
     *  EnablePort: '<S17>/Enable'
     */
    /* Logic: '<S15>/Logical Operator' incorporates:
     *  Logic: '<S15>/Logical Operator1'
     */
    if ((temp != 0.0) && (!(MLC_Aero_Simulink2016a_B.Stepend_time != 0.0))) {
      if (!MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
        MLC_Aero_Simulink2016a_DW.UnitDelay_DSTATE =
          MLC_Aero_Simulink2016a_P.UnitDelay_InitialCondition;

        /* InitializeConditions for UnitDelay: '<S17>/Sum( k=1,n-1, x(k) )' */
        MLC_Aero_Simulink2016a_DW.Sumk1n1xk_DSTATE =
          MLC_Aero_Simulink2016a_P.Sumk1n1xk_InitialCondition;
        MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_MODE = true;
      }

      /* Sum: '<S21>/Count' incorporates:
       *  Constant: '<S21>/unity'
       *  UnitDelay: '<S21>/Unit Delay'
       */
      MLC_Aero_Simulink2016a_B.Count = MLC_Aero_Simulink2016a_P.unity_Value +
        MLC_Aero_Simulink2016a_DW.UnitDelay_DSTATE;

      /* Sum: '<S17>/Sum' incorporates:
       *  Product: '<S7>/Ax//Az'
       *  Trigonometry: '<S7>/Calculate Pitch'
       *  UnitDelay: '<S17>/Sum( k=1,n-1, x(k) )'
       */
      MLC_Aero_Simulink2016a_B.Sum_b = atan(rtb_HILReadTimebase_o3[0] /
        rtb_HILReadTimebase_o3[1]) + MLC_Aero_Simulink2016a_DW.Sumk1n1xk_DSTATE;

      /* Product: '<S17>/div' */
      MLC_Aero_Simulink2016a_B.div = MLC_Aero_Simulink2016a_B.Sum_b /
        MLC_Aero_Simulink2016a_B.Count;
      srUpdateBC(MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_SubsysRanB);
    } else {
      if (MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_MODE) {
        MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_MODE = false;
      }
    }

    /* End of Logic: '<S15>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S15>/Enabled Moving Average' */

    /* SwitchCase: '<S15>/Switch Case' */
    rtAction = -1;
    if (MLC_Aero_Simulink2016a_P.PitchBiasRemoval_switch_id < 0.0) {
      temp = ceil(MLC_Aero_Simulink2016a_P.PitchBiasRemoval_switch_id);
    } else {
      temp = floor(MLC_Aero_Simulink2016a_P.PitchBiasRemoval_switch_id);
    }

    if (rtIsNaN(temp) || rtIsInf(temp)) {
      temp = 0.0;
    } else {
      temp = fmod(temp, 4.294967296E+9);
    }

    switch (temp < 0.0 ? -(int32_T)(uint32_T)-temp : (int32_T)(uint32_T)temp) {
     case 1:
      rtAction = 0;
      break;

     case 2:
      rtAction = 1;
      break;

     case 3:
      rtAction = 2;
      break;
    }

    MLC_Aero_Simulink2016a_DW.SwitchCase_ActiveSubsystem = rtAction;
    switch (rtAction) {
     case 0:
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S15>/Switch Case Action Subsystem1' incorporates:
       *  ActionPort: '<S19>/Action Port'
       */
      srUpdateBC(MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem1_Subs);

      /* End of Outputs for SubSystem: '<S15>/Switch Case Action Subsystem1' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S15>/Switch Case Action Subsystem2' incorporates:
       *  ActionPort: '<S20>/Action Port'
       */
      srUpdateBC(MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem2_Subs);

      /* End of Outputs for SubSystem: '<S15>/Switch Case Action Subsystem2' */
      break;
    }

    /* End of SwitchCase: '<S15>/Switch Case' */
    /* End of Outputs for SubSystem: '<S7>/Pitch Bias Removal' */

    /* Sum: '<S7>/Sum' */
    MLC_Aero_Simulink2016a_B.Sum = MLC_Aero_Simulink2016a_B.Countstorads[0] -
      MLC_Aero_Simulink2016a_B.div;
  }

  /* Sum: '<Root>/Sum' */
  MLC_Aero_Simulink2016a_B.Sum_a[0] = MLC_Aero_Simulink2016a_B.PitchReference -
    MLC_Aero_Simulink2016a_B.Sum;
  MLC_Aero_Simulink2016a_B.Sum_a[1] = MLC_Aero_Simulink2016a_B.YawReference -
    MLC_Aero_Simulink2016a_B.Countstorads[1];

  /* StateSpace: '<S1>/Internal' */
  MLC_Aero_Simulink2016a_B.Internal[0] = 0.0;
  for (ci = 0; ci < 8; ci++) {
    MLC_Aero_Simulink2016a_B.Internal[0] +=
      MLC_Aero_Simulink2016a_P.Internal_C[ci] *
      MLC_Aero_Simulink2016a_X.Internal_CSTATE[jc[ci]];
  }

  MLC_Aero_Simulink2016a_B.Internal[1] = 0.0;
  while (ci < 16) {
    MLC_Aero_Simulink2016a_B.Internal[1] +=
      MLC_Aero_Simulink2016a_P.Internal_C[ci] *
      MLC_Aero_Simulink2016a_X.Internal_CSTATE[jc[ci]];
    ci++;
  }

  MLC_Aero_Simulink2016a_B.Internal[0] += MLC_Aero_Simulink2016a_P.Internal_D[0]
    * MLC_Aero_Simulink2016a_B.Sum_a[0];
  MLC_Aero_Simulink2016a_B.Internal[0] += MLC_Aero_Simulink2016a_P.Internal_D[1]
    * MLC_Aero_Simulink2016a_B.Sum_a[1];
  MLC_Aero_Simulink2016a_B.Internal[1] += MLC_Aero_Simulink2016a_P.Internal_D[2]
    * MLC_Aero_Simulink2016a_B.Sum_a[0];
  MLC_Aero_Simulink2016a_B.Internal[1] += MLC_Aero_Simulink2016a_P.Internal_D[3]
    * MLC_Aero_Simulink2016a_B.Sum_a[1];

  /* End of StateSpace: '<S1>/Internal' */

  /* StateSpace: '<S8>/Internal' */
  MLC_Aero_Simulink2016a_B.Internal_m = 0.0;
  MLC_Aero_Simulink2016a_B.Internal_m += MLC_Aero_Simulink2016a_P.Internal_C_f[0]
    * MLC_Aero_Simulink2016a_X.Internal_CSTATE_i[0];
  MLC_Aero_Simulink2016a_B.Internal_m += MLC_Aero_Simulink2016a_P.Internal_C_f[1]
    * MLC_Aero_Simulink2016a_X.Internal_CSTATE_i[1];
  MLC_Aero_Simulink2016a_B.Internal_m += MLC_Aero_Simulink2016a_P.Internal_D_a *
    MLC_Aero_Simulink2016a_B.Internal[0];

  /* StateSpace: '<S9>/Internal' */
  MLC_Aero_Simulink2016a_B.Internal_o = 0.0;
  MLC_Aero_Simulink2016a_B.Internal_o += MLC_Aero_Simulink2016a_P.Internal_C_nt
    [0] * MLC_Aero_Simulink2016a_X.Internal_CSTATE_jy[0];
  MLC_Aero_Simulink2016a_B.Internal_o += MLC_Aero_Simulink2016a_P.Internal_C_nt
    [1] * MLC_Aero_Simulink2016a_X.Internal_CSTATE_jy[1];
  MLC_Aero_Simulink2016a_B.Internal_o += MLC_Aero_Simulink2016a_P.Internal_D_f *
    MLC_Aero_Simulink2016a_B.Internal[1];

  /* Switch: '<S7>/Motor Enable' incorporates:
   *  Constant: '<S7>/No Control'
   */
  if (MLC_Aero_Simulink2016a_B.Stepend_time >
      MLC_Aero_Simulink2016a_P.MotorEnable_Threshold) {
    /* Sum: '<S2>/Sum' incorporates:
     *  StateSpace: '<S5>/Internal'
     */
    temp = (MLC_Aero_Simulink2016a_P.Internal_C_n *
            MLC_Aero_Simulink2016a_X.Internal_CSTATE_j +
            MLC_Aero_Simulink2016a_P.Internal_D_n *
            MLC_Aero_Simulink2016a_B.Internal_m) +
      MLC_Aero_Simulink2016a_B.Internal[0];

    /* Saturate: '<S7>/+//- 24V' */
    if (temp > MLC_Aero_Simulink2016a_P.u4V_UpperSat) {
      MLC_Aero_Simulink2016a_B.MotorEnable[0] =
        MLC_Aero_Simulink2016a_P.u4V_UpperSat;
    } else if (temp < MLC_Aero_Simulink2016a_P.u4V_LowerSat) {
      MLC_Aero_Simulink2016a_B.MotorEnable[0] =
        MLC_Aero_Simulink2016a_P.u4V_LowerSat;
    } else {
      MLC_Aero_Simulink2016a_B.MotorEnable[0] = temp;
    }

    /* Sum: '<S2>/Sum1' incorporates:
     *  StateSpace: '<S6>/Internal'
     */
    temp = (MLC_Aero_Simulink2016a_P.Internal_C_k *
            MLC_Aero_Simulink2016a_X.Internal_CSTATE_d +
            MLC_Aero_Simulink2016a_P.Internal_D_b *
            MLC_Aero_Simulink2016a_B.Internal_o) +
      MLC_Aero_Simulink2016a_B.Internal[1];

    /* Saturate: '<S7>/+//- 24V' */
    if (temp > MLC_Aero_Simulink2016a_P.u4V_UpperSat) {
      MLC_Aero_Simulink2016a_B.MotorEnable[1] =
        MLC_Aero_Simulink2016a_P.u4V_UpperSat;
    } else if (temp < MLC_Aero_Simulink2016a_P.u4V_LowerSat) {
      MLC_Aero_Simulink2016a_B.MotorEnable[1] =
        MLC_Aero_Simulink2016a_P.u4V_LowerSat;
    } else {
      MLC_Aero_Simulink2016a_B.MotorEnable[1] = temp;
    }
  } else {
    MLC_Aero_Simulink2016a_B.MotorEnable[0] =
      MLC_Aero_Simulink2016a_P.NoControl_Value[0];
    MLC_Aero_Simulink2016a_B.MotorEnable[1] =
      MLC_Aero_Simulink2016a_P.NoControl_Value[1];
  }

  /* End of Switch: '<S7>/Motor Enable' */
  if (rtmIsMajorTimeStep(MLC_Aero_Simulink2016a_M)) {
    /* Switch: '<S7>/LED Colour' incorporates:
     *  Constant: '<S14>/Constant'
     *  Constant: '<S16>/Constant'
     */
    if (MLC_Aero_Simulink2016a_B.Stepend_time >
        MLC_Aero_Simulink2016a_P.LEDColour_Threshold) {
      rtb_LEDColour[0] = MLC_Aero_Simulink2016a_P.Green_color[0];
      rtb_LEDColour[1] = MLC_Aero_Simulink2016a_P.Green_color[1];
      rtb_LEDColour[2] = MLC_Aero_Simulink2016a_P.Green_color[2];
    } else {
      rtb_LEDColour[0] = MLC_Aero_Simulink2016a_P.Yellow_color[0];
      rtb_LEDColour[1] = MLC_Aero_Simulink2016a_P.Yellow_color[1];
      rtb_LEDColour[2] = MLC_Aero_Simulink2016a_P.Yellow_color[2];
    }

    /* End of Switch: '<S7>/LED Colour' */

    /* S-Function (hil_write_block): '<S7>/HIL Write' */

    /* S-Function Block: MLC_Aero_Simulink2016a/Uncertain Plant/Plant/HIL Write (hil_write_block) */
    {
      t_error result;
      result = hil_write(MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
                         MLC_Aero_Simulink2016a_P.HILWrite_analog_channels, 2U,
                         NULL, 0U,
                         NULL, 0U,
                         MLC_Aero_Simulink2016a_P.HILWrite_other_channels, 3U,
                         &MLC_Aero_Simulink2016a_B.MotorEnable[0],
                         NULL,
                         NULL,
                         &rtb_LEDColour[0]
                         );
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
      }
    }

    /* SignalConversion: '<Root>/TmpSignal ConversionAtTo WorkspaceInport1' */
    MLC_Aero_Simulink2016a_B.TmpSignalConversionAtToWorkspac[0] =
      MLC_Aero_Simulink2016a_B.Sum;
    MLC_Aero_Simulink2016a_B.TmpSignalConversionAtToWorkspac[1] =
      MLC_Aero_Simulink2016a_B.Countstorads[1];
  }
}

/* Model update function */
void MLC_Aero_Simulink2016a_update(void)
{
  /* Update for Atomic SubSystem: '<S7>/Pitch Bias Removal' */
  /* Update for Enabled SubSystem: '<S15>/Enabled Moving Average' incorporates:
   *  Update for EnablePort: '<S17>/Enable'
   */
  if (rtmIsMajorTimeStep(MLC_Aero_Simulink2016a_M) &&
      MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_MODE) {
    /* Update for UnitDelay: '<S21>/Unit Delay' */
    MLC_Aero_Simulink2016a_DW.UnitDelay_DSTATE = MLC_Aero_Simulink2016a_B.Count;

    /* Update for UnitDelay: '<S17>/Sum( k=1,n-1, x(k) )' */
    MLC_Aero_Simulink2016a_DW.Sumk1n1xk_DSTATE = MLC_Aero_Simulink2016a_B.Sum_b;
  }

  /* End of Update for SubSystem: '<S15>/Enabled Moving Average' */
  /* End of Update for SubSystem: '<S7>/Pitch Bias Removal' */
  if (rtmIsMajorTimeStep(MLC_Aero_Simulink2016a_M)) {
    rt_ertODEUpdateContinuousStates(&MLC_Aero_Simulink2016a_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++MLC_Aero_Simulink2016a_M->Timing.clockTick0)) {
    ++MLC_Aero_Simulink2016a_M->Timing.clockTickH0;
  }

  MLC_Aero_Simulink2016a_M->Timing.t[0] = rtsiGetSolverStopTime
    (&MLC_Aero_Simulink2016a_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++MLC_Aero_Simulink2016a_M->Timing.clockTick1)) {
      ++MLC_Aero_Simulink2016a_M->Timing.clockTickH1;
    }

    MLC_Aero_Simulink2016a_M->Timing.t[1] =
      MLC_Aero_Simulink2016a_M->Timing.clockTick1 *
      MLC_Aero_Simulink2016a_M->Timing.stepSize1 +
      MLC_Aero_Simulink2016a_M->Timing.clockTickH1 *
      MLC_Aero_Simulink2016a_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void MLC_Aero_Simulink2016a_derivatives(void)
{
  int_T is;
  int_T ci;
  static const int8_T ir[9] = { 0, 8, 16, 24, 32, 40, 41, 42, 50 };

  static const int8_T ir_0[9] = { 0, 2, 4, 6, 8, 10, 11, 12, 14 };

  static const int8_T jc[50] = { 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7,
    0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 5, 6,
    0, 1, 2, 3, 4, 5, 6, 7 };

  static const int8_T jc_0[14] = { 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 };

  XDot_MLC_Aero_Simulink2016a_T *_rtXdot;
  _rtXdot = ((XDot_MLC_Aero_Simulink2016a_T *)
             MLC_Aero_Simulink2016a_M->ModelData.derivs);

  /* Derivatives for StateSpace: '<S1>/Internal' */
  for (is = 0; is < 8; is++) {
    _rtXdot->Internal_CSTATE[is] = 0.0;
    for (ci = ir[is]; ci < ir[is + 1]; ci++) {
      _rtXdot->Internal_CSTATE[is] += MLC_Aero_Simulink2016a_P.Internal_A[ci] *
        MLC_Aero_Simulink2016a_X.Internal_CSTATE[jc[ci]];
    }
  }

  for (is = 0; is < 8; is++) {
    for (ci = ir_0[is]; ci < ir_0[is + 1]; ci++) {
      _rtXdot->Internal_CSTATE[is] += MLC_Aero_Simulink2016a_P.Internal_B[ci] *
        MLC_Aero_Simulink2016a_B.Sum_a[jc_0[ci]];
    }
  }

  /* End of Derivatives for StateSpace: '<S1>/Internal' */

  /* Derivatives for StateSpace: '<S8>/Internal' */
  _rtXdot->Internal_CSTATE_i[0] = 0.0;
  _rtXdot->Internal_CSTATE_i[1] = 0.0;
  _rtXdot->Internal_CSTATE_i[0] += MLC_Aero_Simulink2016a_P.Internal_A_j[0] *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_i[0];
  _rtXdot->Internal_CSTATE_i[0] += MLC_Aero_Simulink2016a_P.Internal_A_j[1] *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_i[1];
  _rtXdot->Internal_CSTATE_i[1] += MLC_Aero_Simulink2016a_P.Internal_A_j[2] *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_i[0];
  _rtXdot->Internal_CSTATE_i[1] += MLC_Aero_Simulink2016a_P.Internal_A_j[3] *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_i[1];
  _rtXdot->Internal_CSTATE_i[0] += MLC_Aero_Simulink2016a_P.Internal_B_p[0] *
    MLC_Aero_Simulink2016a_B.Internal[0];
  _rtXdot->Internal_CSTATE_i[1] += MLC_Aero_Simulink2016a_P.Internal_B_p[1] *
    MLC_Aero_Simulink2016a_B.Internal[0];

  /* Derivatives for StateSpace: '<S5>/Internal' */
  _rtXdot->Internal_CSTATE_j = 0.0;
  _rtXdot->Internal_CSTATE_j += MLC_Aero_Simulink2016a_P.Internal_A_j5 *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_j;
  _rtXdot->Internal_CSTATE_j += MLC_Aero_Simulink2016a_P.Internal_B_g *
    MLC_Aero_Simulink2016a_B.Internal_m;

  /* Derivatives for StateSpace: '<S9>/Internal' */
  _rtXdot->Internal_CSTATE_jy[0] = 0.0;
  _rtXdot->Internal_CSTATE_jy[1] = 0.0;
  _rtXdot->Internal_CSTATE_jy[0] += MLC_Aero_Simulink2016a_P.Internal_A_c[0] *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_jy[0];
  _rtXdot->Internal_CSTATE_jy[0] += MLC_Aero_Simulink2016a_P.Internal_A_c[1] *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_jy[1];
  _rtXdot->Internal_CSTATE_jy[1] += MLC_Aero_Simulink2016a_P.Internal_A_c[2] *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_jy[0];
  _rtXdot->Internal_CSTATE_jy[1] += MLC_Aero_Simulink2016a_P.Internal_A_c[3] *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_jy[1];
  _rtXdot->Internal_CSTATE_jy[0] += MLC_Aero_Simulink2016a_P.Internal_B_p2[0] *
    MLC_Aero_Simulink2016a_B.Internal[1];
  _rtXdot->Internal_CSTATE_jy[1] += MLC_Aero_Simulink2016a_P.Internal_B_p2[1] *
    MLC_Aero_Simulink2016a_B.Internal[1];

  /* Derivatives for StateSpace: '<S6>/Internal' */
  _rtXdot->Internal_CSTATE_d = 0.0;
  _rtXdot->Internal_CSTATE_d += MLC_Aero_Simulink2016a_P.Internal_A_e *
    MLC_Aero_Simulink2016a_X.Internal_CSTATE_d;
  _rtXdot->Internal_CSTATE_d += MLC_Aero_Simulink2016a_P.Internal_B_i *
    MLC_Aero_Simulink2016a_B.Internal_o;
}

/* Model initialize function */
void MLC_Aero_Simulink2016a_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<S7>/HIL Initialize' */

  /* S-Function Block: MLC_Aero_Simulink2016a/Uncertain Plant/Plant/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("quanser_aero_usb", "0",
                      &MLC_Aero_Simulink2016a_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_watchdog_clear(MLC_Aero_Simulink2016a_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
      return;
    }

    if ((MLC_Aero_Simulink2016a_P.HILInitialize_AIPStart && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_AIPEnter && is_switching)) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_AIMinimums[0] =
        (MLC_Aero_Simulink2016a_P.HILInitialize_AILow);
      MLC_Aero_Simulink2016a_DW.HILInitialize_AIMinimums[1] =
        (MLC_Aero_Simulink2016a_P.HILInitialize_AILow);
      MLC_Aero_Simulink2016a_DW.HILInitialize_AIMaximums[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AIHigh;
      MLC_Aero_Simulink2016a_DW.HILInitialize_AIMaximums[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AIHigh;
      result = hil_set_analog_input_ranges
        (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
         MLC_Aero_Simulink2016a_P.HILInitialize_AIChannels, 2U,
         &MLC_Aero_Simulink2016a_DW.HILInitialize_AIMinimums[0],
         &MLC_Aero_Simulink2016a_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }

      MLC_Aero_Simulink2016a_DW.HILInitialize_AIConfigValues[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AIConfiguration;
      MLC_Aero_Simulink2016a_DW.HILInitialize_AIConfigValues[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AIConfiguration;
      result = hil_set_analog_input_configuration
        (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
         MLC_Aero_Simulink2016a_P.HILInitialize_AIChannels, 2U,
         (t_analog_input_configuration *)
         &MLC_Aero_Simulink2016a_DW.HILInitialize_AIConfigValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }

    if ((MLC_Aero_Simulink2016a_P.HILInitialize_AOPStart && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_AOPEnter && is_switching)) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOMinimums[0] =
        (MLC_Aero_Simulink2016a_P.HILInitialize_AOLow);
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOMinimums[1] =
        (MLC_Aero_Simulink2016a_P.HILInitialize_AOLow);
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOMaximums[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AOHigh;
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOMaximums[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AOHigh;
      result = hil_set_analog_output_ranges
        (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
         MLC_Aero_Simulink2016a_P.HILInitialize_AOChannels, 2U,
         &MLC_Aero_Simulink2016a_DW.HILInitialize_AOMinimums[0],
         &MLC_Aero_Simulink2016a_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }

    if ((MLC_Aero_Simulink2016a_P.HILInitialize_AOStart && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_AOEnter && is_switching)) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AOInitial;
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AOInitial;
      result = hil_write_analog(MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
        MLC_Aero_Simulink2016a_P.HILInitialize_AOChannels, 2U,
        &MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }

    if (MLC_Aero_Simulink2016a_P.HILInitialize_AOReset) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AOWatchdog;
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AOWatchdog;
      result = hil_watchdog_set_analog_expiration_state
        (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
         MLC_Aero_Simulink2016a_P.HILInitialize_AOChannels, 2U,
         &MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions
      (MLC_Aero_Simulink2016a_DW.HILInitialize_Card, NULL, 0U,
       MLC_Aero_Simulink2016a_P.HILInitialize_DOChannels, 2U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
      return;
    }

    if ((MLC_Aero_Simulink2016a_P.HILInitialize_DOStart && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_DOEnter && is_switching)) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_DOBits[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_DOInitial;
      MLC_Aero_Simulink2016a_DW.HILInitialize_DOBits[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_DOInitial;
      result = hil_write_digital(MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
        MLC_Aero_Simulink2016a_P.HILInitialize_DOChannels, 2U, (t_boolean *)
        &MLC_Aero_Simulink2016a_DW.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }

    if (MLC_Aero_Simulink2016a_P.HILInitialize_DOReset) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_DOStates[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_DOWatchdog;
      MLC_Aero_Simulink2016a_DW.HILInitialize_DOStates[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_DOWatchdog;
      result = hil_watchdog_set_digital_expiration_state
        (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
         MLC_Aero_Simulink2016a_P.HILInitialize_DOChannels, 2U, (const
          t_digital_state *) &MLC_Aero_Simulink2016a_DW.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }

    if ((MLC_Aero_Simulink2016a_P.HILInitialize_EIPStart && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_EIPEnter && is_switching)) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_QuadratureModes[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_EIQuadrature;
      MLC_Aero_Simulink2016a_DW.HILInitialize_QuadratureModes[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_EIQuadrature;
      MLC_Aero_Simulink2016a_DW.HILInitialize_QuadratureModes[2] =
        MLC_Aero_Simulink2016a_P.HILInitialize_EIQuadrature;
      MLC_Aero_Simulink2016a_DW.HILInitialize_QuadratureModes[3] =
        MLC_Aero_Simulink2016a_P.HILInitialize_EIQuadrature;
      result = hil_set_encoder_quadrature_mode
        (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
         MLC_Aero_Simulink2016a_P.HILInitialize_EIChannels, 4U,
         (t_encoder_quadrature_mode *)
         &MLC_Aero_Simulink2016a_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }

    if ((MLC_Aero_Simulink2016a_P.HILInitialize_EIStart && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_EIEnter && is_switching)) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_InitialEICounts[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_EIInitial;
      MLC_Aero_Simulink2016a_DW.HILInitialize_InitialEICounts[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_EIInitial;
      MLC_Aero_Simulink2016a_DW.HILInitialize_InitialEICounts[2] =
        MLC_Aero_Simulink2016a_P.HILInitialize_EIInitial;
      MLC_Aero_Simulink2016a_DW.HILInitialize_InitialEICounts[3] =
        MLC_Aero_Simulink2016a_P.HILInitialize_EIInitial;
      result = hil_set_encoder_counts
        (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
         MLC_Aero_Simulink2016a_P.HILInitialize_EIChannels, 4U,
         &MLC_Aero_Simulink2016a_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }

    if ((MLC_Aero_Simulink2016a_P.HILInitialize_OOStart && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_OOEnter && is_switching)) {
      result = hil_write_other(MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
        MLC_Aero_Simulink2016a_P.HILInitialize_OOChannels, 3U,
        MLC_Aero_Simulink2016a_P.HILInitialize_OOInitial);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }

    if (MLC_Aero_Simulink2016a_P.HILInitialize_OOReset) {
      result = hil_watchdog_set_other_expiration_state
        (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
         MLC_Aero_Simulink2016a_P.HILInitialize_OOChannels, 3U,
         MLC_Aero_Simulink2016a_P.HILInitialize_OOWatchdog);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (hil_read_timebase_block): '<S7>/HIL Read Timebase' */

  /* S-Function Block: MLC_Aero_Simulink2016a/Uncertain Plant/Plant/HIL Read Timebase (hil_read_timebase_block) */
  {
    t_error result;
    result = hil_task_create_reader(MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
      MLC_Aero_Simulink2016a_P.HILReadTimebase_samples_in_buff,
      MLC_Aero_Simulink2016a_P.HILReadTimebase_analog_channels, 2U,
      MLC_Aero_Simulink2016a_P.HILReadTimebase_encoder_channel, 2U,
      NULL, 0U,
      MLC_Aero_Simulink2016a_P.HILReadTimebase_other_channels, 4U,
      &MLC_Aero_Simulink2016a_DW.HILReadTimebase_Task);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
    }
  }

  /* Start for Atomic SubSystem: '<S7>/Pitch Bias Removal' */
  /* Start for Enabled SubSystem: '<S15>/Enabled Moving Average' */
  MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_MODE = false;

  /* End of Start for SubSystem: '<S15>/Enabled Moving Average' */

  /* Start for SwitchCase: '<S15>/Switch Case' */
  MLC_Aero_Simulink2016a_DW.SwitchCase_ActiveSubsystem = -1;

  /* End of Start for SubSystem: '<S7>/Pitch Bias Removal' */

  /* InitializeConditions for StateSpace: '<S1>/Internal' */
  memset(&MLC_Aero_Simulink2016a_X.Internal_CSTATE[0], 0, sizeof(real_T) << 3U);

  /* InitializeConditions for StateSpace: '<S8>/Internal' */
  MLC_Aero_Simulink2016a_X.Internal_CSTATE_i[0] = 0.0;
  MLC_Aero_Simulink2016a_X.Internal_CSTATE_i[1] = 0.0;

  /* InitializeConditions for StateSpace: '<S5>/Internal' */
  MLC_Aero_Simulink2016a_X.Internal_CSTATE_j = 0.0;

  /* InitializeConditions for StateSpace: '<S9>/Internal' */
  MLC_Aero_Simulink2016a_X.Internal_CSTATE_jy[0] = 0.0;
  MLC_Aero_Simulink2016a_X.Internal_CSTATE_jy[1] = 0.0;

  /* InitializeConditions for StateSpace: '<S6>/Internal' */
  MLC_Aero_Simulink2016a_X.Internal_CSTATE_d = 0.0;

  /* SystemInitialize for Atomic SubSystem: '<S7>/Pitch Bias Removal' */
  /* SystemInitialize for Enabled SubSystem: '<S15>/Enabled Moving Average' */
  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
  MLC_Aero_Simulink2016a_DW.UnitDelay_DSTATE =
    MLC_Aero_Simulink2016a_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S17>/Sum( k=1,n-1, x(k) )' */
  MLC_Aero_Simulink2016a_DW.Sumk1n1xk_DSTATE =
    MLC_Aero_Simulink2016a_P.Sumk1n1xk_InitialCondition;

  /* SystemInitialize for Outport: '<S17>/x_avg_n' */
  MLC_Aero_Simulink2016a_B.div = MLC_Aero_Simulink2016a_P.x_avg_n_Y0;

  /* End of SystemInitialize for SubSystem: '<S15>/Enabled Moving Average' */
  /* End of SystemInitialize for SubSystem: '<S7>/Pitch Bias Removal' */
}

/* Model terminate function */
void MLC_Aero_Simulink2016a_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S7>/HIL Initialize' */

  /* S-Function Block: MLC_Aero_Simulink2016a/Uncertain Plant/Plant/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    t_uint32 num_final_digital_outputs = 0;
    t_uint32 num_final_other_outputs = 0;
    hil_task_stop_all(MLC_Aero_Simulink2016a_DW.HILInitialize_Card);
    hil_monitor_stop_all(MLC_Aero_Simulink2016a_DW.HILInitialize_Card);
    is_switching = false;
    if ((MLC_Aero_Simulink2016a_P.HILInitialize_AOTerminate && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_AOExit && is_switching)) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AOFinal;
      MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_AOFinal;
      num_final_analog_outputs = 2U;
    }

    if ((MLC_Aero_Simulink2016a_P.HILInitialize_DOTerminate && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_DOExit && is_switching)) {
      MLC_Aero_Simulink2016a_DW.HILInitialize_DOBits[0] =
        MLC_Aero_Simulink2016a_P.HILInitialize_DOFinal;
      MLC_Aero_Simulink2016a_DW.HILInitialize_DOBits[1] =
        MLC_Aero_Simulink2016a_P.HILInitialize_DOFinal;
      num_final_digital_outputs = 2U;
    }

    if ((MLC_Aero_Simulink2016a_P.HILInitialize_OOTerminate && !is_switching) ||
        (MLC_Aero_Simulink2016a_P.HILInitialize_OOExit && is_switching)) {
      num_final_other_outputs = 3U;
    }

    if (0
        || num_final_analog_outputs > 0
        || num_final_digital_outputs > 0
        || num_final_other_outputs > 0
        ) {
      /* Attempt to write the final outputs atomically (due to firmware issue in old Q2-USB). Otherwise write channels individually */
      result = hil_write(MLC_Aero_Simulink2016a_DW.HILInitialize_Card
                         , MLC_Aero_Simulink2016a_P.HILInitialize_AOChannels,
                         num_final_analog_outputs
                         , NULL, 0
                         , MLC_Aero_Simulink2016a_P.HILInitialize_DOChannels,
                         num_final_digital_outputs
                         , MLC_Aero_Simulink2016a_P.HILInitialize_OOChannels,
                         num_final_other_outputs
                         , &MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[0]
                         , NULL
                         , (t_boolean *)
                         &MLC_Aero_Simulink2016a_DW.HILInitialize_DOBits[0]
                         , MLC_Aero_Simulink2016a_P.HILInitialize_OOFinal
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_analog_outputs > 0) {
          local_result = hil_write_analog
            (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
             MLC_Aero_Simulink2016a_P.HILInitialize_AOChannels,
             num_final_analog_outputs,
             &MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_digital_outputs > 0) {
          local_result = hil_write_digital
            (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
             MLC_Aero_Simulink2016a_P.HILInitialize_DOChannels,
             num_final_digital_outputs, (t_boolean *)
             &MLC_Aero_Simulink2016a_DW.HILInitialize_DOBits[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_other_outputs > 0) {
          local_result = hil_write_other
            (MLC_Aero_Simulink2016a_DW.HILInitialize_Card,
             MLC_Aero_Simulink2016a_P.HILInitialize_OOChannels,
             num_final_other_outputs,
             MLC_Aero_Simulink2016a_P.HILInitialize_OOFinal);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(MLC_Aero_Simulink2016a_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(MLC_Aero_Simulink2016a_DW.HILInitialize_Card);
    hil_monitor_delete_all(MLC_Aero_Simulink2016a_DW.HILInitialize_Card);
    hil_close(MLC_Aero_Simulink2016a_DW.HILInitialize_Card);
    MLC_Aero_Simulink2016a_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  MLC_Aero_Simulink2016a_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  MLC_Aero_Simulink2016a_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  MLC_Aero_Simulink2016a_initialize();
}

void MdlTerminate(void)
{
  MLC_Aero_Simulink2016a_terminate();
}

/* Registration function */
RT_MODEL_MLC_Aero_Simulink201_T *MLC_Aero_Simulink2016a(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)MLC_Aero_Simulink2016a_M, 0,
                sizeof(RT_MODEL_MLC_Aero_Simulink201_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&MLC_Aero_Simulink2016a_M->solverInfo,
                          &MLC_Aero_Simulink2016a_M->Timing.simTimeStep);
    rtsiSetTPtr(&MLC_Aero_Simulink2016a_M->solverInfo, &rtmGetTPtr
                (MLC_Aero_Simulink2016a_M));
    rtsiSetStepSizePtr(&MLC_Aero_Simulink2016a_M->solverInfo,
                       &MLC_Aero_Simulink2016a_M->Timing.stepSize0);
    rtsiSetdXPtr(&MLC_Aero_Simulink2016a_M->solverInfo,
                 &MLC_Aero_Simulink2016a_M->ModelData.derivs);
    rtsiSetContStatesPtr(&MLC_Aero_Simulink2016a_M->solverInfo, (real_T **)
                         &MLC_Aero_Simulink2016a_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&MLC_Aero_Simulink2016a_M->solverInfo,
      &MLC_Aero_Simulink2016a_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&MLC_Aero_Simulink2016a_M->solverInfo,
      &MLC_Aero_Simulink2016a_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&MLC_Aero_Simulink2016a_M->solverInfo,
      &MLC_Aero_Simulink2016a_M->ModelData.periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&MLC_Aero_Simulink2016a_M->solverInfo,
      &MLC_Aero_Simulink2016a_M->ModelData.periodicContStateRanges);
    rtsiSetErrorStatusPtr(&MLC_Aero_Simulink2016a_M->solverInfo,
                          (&rtmGetErrorStatus(MLC_Aero_Simulink2016a_M)));
    rtsiSetRTModelPtr(&MLC_Aero_Simulink2016a_M->solverInfo,
                      MLC_Aero_Simulink2016a_M);
  }

  rtsiSetSimTimeStep(&MLC_Aero_Simulink2016a_M->solverInfo, MAJOR_TIME_STEP);
  MLC_Aero_Simulink2016a_M->ModelData.intgData.f[0] =
    MLC_Aero_Simulink2016a_M->ModelData.odeF[0];
  MLC_Aero_Simulink2016a_M->ModelData.contStates = ((real_T *)
    &MLC_Aero_Simulink2016a_X);
  rtsiSetSolverData(&MLC_Aero_Simulink2016a_M->solverInfo, (void *)
                    &MLC_Aero_Simulink2016a_M->ModelData.intgData);
  rtsiSetSolverName(&MLC_Aero_Simulink2016a_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = MLC_Aero_Simulink2016a_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    MLC_Aero_Simulink2016a_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    MLC_Aero_Simulink2016a_M->Timing.sampleTimes =
      (&MLC_Aero_Simulink2016a_M->Timing.sampleTimesArray[0]);
    MLC_Aero_Simulink2016a_M->Timing.offsetTimes =
      (&MLC_Aero_Simulink2016a_M->Timing.offsetTimesArray[0]);

    /* task periods */
    MLC_Aero_Simulink2016a_M->Timing.sampleTimes[0] = (0.0);
    MLC_Aero_Simulink2016a_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    MLC_Aero_Simulink2016a_M->Timing.offsetTimes[0] = (0.0);
    MLC_Aero_Simulink2016a_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(MLC_Aero_Simulink2016a_M, &MLC_Aero_Simulink2016a_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = MLC_Aero_Simulink2016a_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    MLC_Aero_Simulink2016a_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(MLC_Aero_Simulink2016a_M, 20.0);
  MLC_Aero_Simulink2016a_M->Timing.stepSize0 = 0.002;
  MLC_Aero_Simulink2016a_M->Timing.stepSize1 = 0.002;

  /* External mode info */
  MLC_Aero_Simulink2016a_M->Sizes.checksums[0] = (2825639371U);
  MLC_Aero_Simulink2016a_M->Sizes.checksums[1] = (883591836U);
  MLC_Aero_Simulink2016a_M->Sizes.checksums[2] = (3010292674U);
  MLC_Aero_Simulink2016a_M->Sizes.checksums[3] = (2173862250U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[7];
    MLC_Aero_Simulink2016a_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_SubsysRanB;
    systemRan[3] = (sysRanDType *)
      &MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem_Subsy;
    systemRan[4] = (sysRanDType *)
      &MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem1_Subs;
    systemRan[5] = (sysRanDType *)
      &MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem2_Subs;
    systemRan[6] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(MLC_Aero_Simulink2016a_M->extModeInfo,
      &MLC_Aero_Simulink2016a_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(MLC_Aero_Simulink2016a_M->extModeInfo,
                        MLC_Aero_Simulink2016a_M->Sizes.checksums);
    rteiSetTPtr(MLC_Aero_Simulink2016a_M->extModeInfo, rtmGetTPtr
                (MLC_Aero_Simulink2016a_M));
  }

  MLC_Aero_Simulink2016a_M->solverInfoPtr =
    (&MLC_Aero_Simulink2016a_M->solverInfo);
  MLC_Aero_Simulink2016a_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&MLC_Aero_Simulink2016a_M->solverInfo, 0.002);
  rtsiSetSolverMode(&MLC_Aero_Simulink2016a_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  MLC_Aero_Simulink2016a_M->ModelData.blockIO = ((void *)
    &MLC_Aero_Simulink2016a_B);
  (void) memset(((void *) &MLC_Aero_Simulink2016a_B), 0,
                sizeof(B_MLC_Aero_Simulink2016a_T));

  /* parameters */
  MLC_Aero_Simulink2016a_M->ModelData.defaultParam = ((real_T *)
    &MLC_Aero_Simulink2016a_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &MLC_Aero_Simulink2016a_X;
    MLC_Aero_Simulink2016a_M->ModelData.contStates = (x);
    (void) memset((void *)&MLC_Aero_Simulink2016a_X, 0,
                  sizeof(X_MLC_Aero_Simulink2016a_T));
  }

  /* states (dwork) */
  MLC_Aero_Simulink2016a_M->ModelData.dwork = ((void *)
    &MLC_Aero_Simulink2016a_DW);
  (void) memset((void *)&MLC_Aero_Simulink2016a_DW, 0,
                sizeof(DW_MLC_Aero_Simulink2016a_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    MLC_Aero_Simulink2016a_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 16;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  MLC_Aero_Simulink2016a_M->Sizes.numContStates = (14);/* Number of continuous states */
  MLC_Aero_Simulink2016a_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  MLC_Aero_Simulink2016a_M->Sizes.numY = (0);/* Number of model outputs */
  MLC_Aero_Simulink2016a_M->Sizes.numU = (0);/* Number of model inputs */
  MLC_Aero_Simulink2016a_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  MLC_Aero_Simulink2016a_M->Sizes.numSampTimes = (2);/* Number of sample times */
  MLC_Aero_Simulink2016a_M->Sizes.numBlocks = (52);/* Number of blocks */
  MLC_Aero_Simulink2016a_M->Sizes.numBlockIO = (16);/* Number of block outputs */
  MLC_Aero_Simulink2016a_M->Sizes.numBlockPrms = (232);/* Sum of parameter "widths" */
  return MLC_Aero_Simulink2016a_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
