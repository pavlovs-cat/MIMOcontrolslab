/*
 * MLC_Aero_Simulink2016a_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "MLC_Aero_Simulink2016a".
 *
 * Model version              : 1.110
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Thu Apr 26 23:56:33 2018
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MLC_Aero_Simulink2016a.h"
#include "MLC_Aero_Simulink2016a_private.h"

/* Block parameters (auto storage) */
P_MLC_Aero_Simulink2016a_T MLC_Aero_Simulink2016a_P = {
  /*  Mask Parameter: Green_color
   * Referenced by: '<S14>/Constant'
   */
  { 0.0, 1.0, 0.0 },

  /*  Mask Parameter: Yellow_color
   * Referenced by: '<S16>/Constant'
   */
  { 1.0, 1.0, 0.0 },
  1.0,                                 /* Mask Parameter: PitchBiasRemoval_end_time
                                        * Referenced by: '<S15>/Step: end_time'
                                        */
  0.0,                                 /* Mask Parameter: PitchBiasRemoval_start_time
                                        * Referenced by: '<S15>/Step: start_time'
                                        */
  1.0,                                 /* Mask Parameter: PitchBiasRemoval_switch_id
                                        * Referenced by: '<S15>/Constant'
                                        */
  0,                                   /* Mask Parameter: HILReadTimebase_clock
                                        * Referenced by: '<S7>/HIL Read Timebase'
                                        */

  /*  Mask Parameter: HILReadTimebase_analog_channels
   * Referenced by: '<S7>/HIL Read Timebase'
   */
  { 0U, 1U },

  /*  Mask Parameter: HILWrite_analog_channels
   * Referenced by: '<S7>/HIL Write'
   */
  { 0U, 1U },

  /*  Mask Parameter: HILReadTimebase_encoder_channel
   * Referenced by: '<S7>/HIL Read Timebase'
   */
  { 2U, 3U },

  /*  Mask Parameter: HILReadTimebase_other_channels
   * Referenced by: '<S7>/HIL Read Timebase'
   */
  { 4000U, 4002U, 14000U, 14001U },

  /*  Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S7>/HIL Write'
   */
  { 11000U, 11001U, 11002U },
  500U,                                /* Mask Parameter: HILReadTimebase_samples_in_buff
                                        * Referenced by: '<S7>/HIL Read Timebase'
                                        */
  24.0,                                /* Expression: 24
                                        * Referenced by: '<S7>/+//- 24V'
                                        */
  -24.0,                               /* Expression: -24
                                        * Referenced by: '<S7>/+//- 24V'
                                        */
  0.0,                                 /* Computed Parameter: x_avg_n_Y0
                                        * Referenced by: '<S17>/x_avg_n'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S21>/unity'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Unit Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Sum( k=1,n-1, x(k) )'
                                        */
  0.0,                                 /* Expression: [0]
                                        * Referenced by: '<S18>/zero'
                                        */
  0.0,                                 /* Expression: [0]
                                        * Referenced by: '<S19>/Vbiased'
                                        */
  0.0,                                 /* Expression: [0]
                                        * Referenced by: '<S20>/Vunbiased'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Step: start_time'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S15>/Step: start_time'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Step: end_time'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S15>/Step: end_time'
                                        */
  1.0,                                 /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1.0,                                 /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: final_analog_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */

  /*  Expression: final_other_outputs
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 1.0, 0.0, 0.0 },
  3.0,                                 /* Expression: analog_input_maximums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  -3.0,                                /* Expression: analog_input_minimums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  24.0,                                /* Expression: analog_output_maximums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  -24.0,                               /* Expression: analog_output_minimums
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: initial_analog_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */

  /*  Expression: initial_other_outputs
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: watchdog_other_outputs
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0.0, 0.0, 1.0 },

  /*  Computed Parameter: Internal_A
   * Referenced by: '<S1>/Internal'
   */
  { -0.01007079055631988, 1.1102230246251565E-16, -0.01007079055631988,
    4.5474735088646412E-13, 859.32336113467113, -294.80526631987084,
    -178.1809215543463, -268.7365032768426, 0.013317244344406964,
    399953.63175491354, 1.0, -0.32492547725673715, -1.4668413320957641E+6,
    794654.47701444279, 305855.02703098545, 457213.85265108966,
    -34.651472020580371, -1.0743509410169177E+9, 5.9604644775390625E-8,
    -1.000360819765159 },

  /*  Computed Parameter: Internal_B
   * Referenced by: '<S1>/Internal'
   */
  { 0.21185316838740259, 0.21185316838740259 },

  /*  Computed Parameter: Internal_C
   * Referenced by: '<S1>/Internal'
   */
  { 16896.14460657262, -6755.1245036889495, -3509.0286446818536,
    -5254.9196922568353, 0.30105257100748767, 9.1521981398205422E+6,
    12287.250468319082, -3713.2131206337149, -2544.826686129702,
    -3815.692476972481, 0.16988299890784783, 5.0440396637928439E+6 },

  /*  Expression: [0 0]
   * Referenced by: '<S7>/No Control'
   */
  { 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Motor Enable'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/LED Colour'
                                        */

  /*  Expression: [2*pi/2048 2*pi/4096]
   * Referenced by: '<S7>/Counts to rads'
   */
  { 0.0030679615757712823, 0.0015339807878856412 },
  0.52359877559829882,                 /* Expression: pi/6
                                        * Referenced by: '<Root>/Pitch Reference '
                                        */
  0.063661977236758135,                /* Computed Parameter: PitchReference_Frequency
                                        * Referenced by: '<Root>/Pitch Reference '
                                        */
  0.78539816339744828,                 /* Expression: pi/4
                                        * Referenced by: '<Root>/Yaw Reference'
                                        */
  0.079577471545947673,                /* Computed Parameter: YawReference_Frequency
                                        * Referenced by: '<Root>/Yaw Reference'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKChannels
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIConfiguration
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */

  /*  Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0U, 1U },

  /*  Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0U, 1U },

  /*  Computed Parameter: HILInitialize_DOChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0U, 1U },

  /*  Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U },
  4U,                                  /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */

  /*  Computed Parameter: HILInitialize_OOChannels
   * Referenced by: '<S7>/HIL Initialize'
   */
  { 11000U, 11001U, 11002U },
  0,                                   /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S7>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILReadTimebase_Active
                                        * Referenced by: '<S7>/HIL Read Timebase'
                                        */
  0                                    /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S7>/HIL Write'
                                        */
};
