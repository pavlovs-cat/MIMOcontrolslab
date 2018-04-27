/*
 * MLC_Aero_Simulink2016a_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "MLC_Aero_Simulink2016a".
 *
 * Model version              : 1.114
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Apr 27 18:07:47 2018
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

  /*  Expression: [2*pi/2048 2*pi/4096]
   * Referenced by: '<S7>/Counts to rads'
   */
  { 0.0030679615757712823, 0.0015339807878856412 },

  /*  Computed Parameter: Internal_A
   * Referenced by: '<S1>/Internal'
   */
  { 0.9016425322952567, 0.66242766427347244, 2.5693789337651367,
    -0.19548079078682179, 1.2339965128887116, 0.0051999365820580906,
    -0.812051267673518, -0.19852283010730659, -2.9326292446246378,
    -8.4608806703343049, 0.21870949063771475, -0.029507535405786187,
    -14.981645747895259, 1.1704415424596732, -16.65040968735191,
    -0.69052227373275932, 0.76497665143845617, 0.0010247550581039236,
    3.7788216711855314, 12.564377706849829, 7.2623414704397318,
    1.2705406086075184, -0.917212315231867, 0.075223613439460324,
    -10.183488351120216, -1.5703156644437071, -21.157167990214933,
    7.4123628185278161, -9.5469490905666454, -0.0011821194944317082,
    -311.87699419548818, -156.31002097745628, -890.18342480192939,
    -2038.0327398106849, 37.823829866879144, -7.7789332592773768 },

  /*  Computed Parameter: Internal_B
   * Referenced by: '<S1>/Internal'
   */
  { 35.573213390019887, 5.3099527807511482, 5.7353597524209921,
    -16.912155735978743, 42.606432489952439, 16.046812854755739,
    -16.085524312486637, 18.525943359560532, 25.60062898753538,
    -3.50090055783088, -28.987751595709245, 4226.2256162661461 },

  /*  Computed Parameter: Internal_C
   * Referenced by: '<S1>/Internal'
   */
  { 12.958353034908264, 2.6954807237597906, 20.734972639156393,
    -45.325083372330738, 15.372385839767126, -0.11134528341951276,
    22.369233608673923, 1.2988172988173119, 43.565600777641656,
    0.22671504810984996, 15.968248976286409, 0.037486190178362404 },

  /*  Computed Parameter: Internal_D
   * Referenced by: '<S1>/Internal'
   */
  { -0.28446828717038103, 9.5212961685484743, -0.35210638169186287,
    11.785177097495687 },

  /*  Computed Parameter: Internal_A_j
   * Referenced by: '<S8>/Internal'
   */
  { -11.738229699342803, -11.235634170029028, 11.824764488686604,
    11.149099380685227 },

  /*  Computed Parameter: Internal_B_p
   * Referenced by: '<S8>/Internal'
   */
  { 7.1059498834651738, -7.1059498834651738 },

  /*  Computed Parameter: Internal_C_f
   * Referenced by: '<S8>/Internal'
   */
  { -0.66021386023982487, -0.71634966509698128 },
  0.42585470599155656,                 /* Computed Parameter: Internal_D_a
                                        * Referenced by: '<S8>/Internal'
                                        */
  -11.80840324623302,                  /* Computed Parameter: Internal_A_j5
                                        * Referenced by: '<S5>/Internal'
                                        */
  0.56708592499715182,                 /* Computed Parameter: Internal_B_g
                                        * Referenced by: '<S5>/Internal'
                                        */
  0.54166224972906141,                 /* Computed Parameter: Internal_C_n
                                        * Referenced by: '<S5>/Internal'
                                        */
  0.45486929985399055,                 /* Computed Parameter: Internal_D_n
                                        * Referenced by: '<S5>/Internal'
                                        */

  /*  Computed Parameter: Internal_A_c
   * Referenced by: '<S9>/Internal'
   */
  { -11.058664881176867, -10.648295121360611, 11.145199670520666,
    10.56176033201681 },

  /*  Computed Parameter: Internal_B_p2
   * Referenced by: '<S9>/Internal'
   */
  { 6.6975735859859817, -6.6975735859859808 },

  /*  Computed Parameter: Internal_C_nt
   * Referenced by: '<S9>/Internal'
   */
  { -0.89321763192258841, -0.91814859587190434 },
  0.55896970172044136,                 /* Computed Parameter: Internal_D_f
                                        * Referenced by: '<S9>/Internal'
                                        */
  -4.8774971144687447,                 /* Computed Parameter: Internal_A_e
                                        * Referenced by: '<S6>/Internal'
                                        */
  0.264900597068294,                   /* Computed Parameter: Internal_B_i
                                        * Referenced by: '<S6>/Internal'
                                        */
  -3.3041438974729269,                 /* Computed Parameter: Internal_C_k
                                        * Referenced by: '<S6>/Internal'
                                        */
  0.5167316577862846,                  /* Computed Parameter: Internal_D_b
                                        * Referenced by: '<S6>/Internal'
                                        */

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
