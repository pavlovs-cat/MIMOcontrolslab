/*
 * MLC_Aero_Simulink2016a_data.c
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
  { 29.127930355267473, 55.815454838356636, 40.059007088597966,
    -40.926162138150339, -1.7949965329408226, 2.8802785869010856,
    -3.0396594627539359, -44.198898913444928, 51.956994250919436,
    99.298262029402011, 71.75386012348, -73.768334133094854,
    -0.73625106325179523, 8.135589564810175, -5.5558793247206157,
    -77.6472657418713, 47.851098436145335, 90.934335658665546,
    63.635213821240164, -63.732105625507089, 0.73435484197098544,
    9.42018016526541, -5.2065352042818347, -71.39152188604605,
    -52.417788029200793, -100.09199159606635, -71.400927449284637,
    72.767805067646137, 6.69957547929026, -10.231311561817629,
    6.3026685197283587, 83.289023671494576, -248.56295710528579,
    -467.41766590127327, -306.89711173194871, 298.19121688929374,
    -24.11803435117741, -52.615089317858889, 14.499281687216049,
    313.87610699662662, -200.00000000000009, -200.00000000000011,
    570.53778086028581, 1055.9235502606723, 683.25313356427557,
    -711.853863619695, -11.403284449201866, 116.57406488527077,
    -71.644188723212849, -752.65746411016346 },

  /*  Computed Parameter: Internal_B
   * Referenced by: '<S1>/Internal'
   */
  { 26.119662051569946, -27.564999538607491, 73.777186342155176,
    -50.383213283941544, 85.4264318391382, -47.215203631312313,
    -92.7821362677701, 57.155433681674914, -477.13730124774139,
    131.48600950717895, 41582.470152697773, 41582.470152697773,
    1057.1460665744369, -649.7017357694516 },

  /*  Computed Parameter: Internal_C
   * Referenced by: '<S1>/Internal'
   */
  { -1.1617596334495708, -2.1535483143641772, -1.546430480016699,
    1.5894435456695619, 0.176890308405093, -0.052795464718694715,
    0.065277029094970546, 1.5740338261220439, -0.78944358231025591,
    -1.3682656556113821, -0.8823956606705472, 0.86429623096742469,
    -0.52319592183753139, -0.0017552625247710932, -0.0084032299248538982,
    0.47974229721304623 },

  /*  Computed Parameter: Internal_D
   * Referenced by: '<S1>/Internal'
   */
  { -0.47877302653267545, 0.59196146770148628, -0.015917510260052094,
    -0.076204269537334529 },

  /*  Computed Parameter: Internal_A_j
   * Referenced by: '<S8>/Internal'
   */
  { -12.115034987890413, -11.613966834488675, 12.197186986496254,
    11.531814835882837 },

  /*  Computed Parameter: Internal_B_p
   * Referenced by: '<S8>/Internal'
   */
  { 7.522732617213415, -7.5227326172134159 },

  /*  Computed Parameter: Internal_C_f
   * Referenced by: '<S8>/Internal'
   */
  { -0.67411904115150612, -0.7258135461277383 },
  0.44389076202331917,                 /* Computed Parameter: Internal_D_a
                                        * Referenced by: '<S8>/Internal'
                                        */
  -172.9359160261416,                  /* Computed Parameter: Internal_A_j5
                                        * Referenced by: '<S5>/Internal'
                                        */
  -0.13938627658084116,                /* Computed Parameter: Internal_B_g
                                        * Referenced by: '<S5>/Internal'
                                        */
  1.1518605438319238,                  /* Computed Parameter: Internal_C_n
                                        * Referenced by: '<S5>/Internal'
                                        */
  0.49032180816902626,                 /* Computed Parameter: Internal_D_n
                                        * Referenced by: '<S5>/Internal'
                                        */

  /*  Computed Parameter: Internal_A_c
   * Referenced by: '<S9>/Internal'
   */
  { -11.48108704519842, -11.063323551455174, 11.563239043804259,
    10.981171552849334 },

  /*  Computed Parameter: Internal_B_p2
   * Referenced by: '<S9>/Internal'
   */
  { 7.1317391142537341, -7.1317391142537332 },

  /*  Computed Parameter: Internal_C_nt
   * Referenced by: '<S9>/Internal'
   */
  { -0.87862616806660354, -0.90201896916286894 },
  0.563371683159067,                   /* Computed Parameter: Internal_D_f
                                        * Referenced by: '<S9>/Internal'
                                        */
  -28.862359884969941,                 /* Computed Parameter: Internal_A_e
                                        * Referenced by: '<S6>/Internal'
                                        */
  0.5717429319710633,                  /* Computed Parameter: Internal_B_i
                                        * Referenced by: '<S6>/Internal'
                                        */
  -1.0920479834944132,                 /* Computed Parameter: Internal_C_k
                                        * Referenced by: '<S6>/Internal'
                                        */
  0.58148544392020729,                 /* Computed Parameter: Internal_D_b
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
