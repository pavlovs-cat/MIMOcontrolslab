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
 * C source code generated on : Thu Apr 26 23:38:16 2018
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
  { -0.094285618556997089, -0.094285618556997089, 11.918126671029214,
    1.3657464352363338, -5.0794078068906439, -14.647299461125209,
    -4.6874577414882156E-5, -4050.096498259325, 1.0, -0.32492547725673715,
    6566.2205634593774, 71924.6914896273, -957.72949131738824,
    -5543.6037440350992, -5.6838987677063351, -2.7116685438944441E+8,
    5.9604644775390625E-8, -1.000360819765159 },

  /*  Computed Parameter: Internal_B
   * Referenced by: '<S1>/Internal'
   */
  { 4.0, 4.0 },

  /*  Computed Parameter: Internal_C
   * Referenced by: '<S1>/Internal'
   */
  { 30.892169520523417, -46.05717788329963, -14.448731005370741,
    -34.632856631014789, 0.0038213964815614421, 176912.95712122213,
    45.925632026338079, 31.242309276441677, -18.901215206090775,
    -49.26861400417512, -0.0022459547140952262, -113774.38577757073 },

  /*  Computed Parameter: Internal_A_j
   * Referenced by: '<S8>/Internal'
   */
  { -12.453667501435937, -11.99540330569903, 12.537908169139499,
    11.911162637995469 },

  /*  Computed Parameter: Internal_B_p
   * Referenced by: '<S8>/Internal'
   */
  { 7.6364092536009283, -7.6364092536009291 },

  /*  Computed Parameter: Internal_C_f
   * Referenced by: '<S8>/Internal'
   */
  { -0.64668373865485873, -0.70441320974346922 },
  0.42207632414293905,                 /* Computed Parameter: Internal_D
                                        * Referenced by: '<S8>/Internal'
                                        */
  -0.17790216240424372,                /* Computed Parameter: Internal_A_j5
                                        * Referenced by: '<S5>/Internal'
                                        */
  -0.44549050223856934,                /* Computed Parameter: Internal_B_g
                                        * Referenced by: '<S5>/Internal'
                                        */
  -0.16265660429732784,                /* Computed Parameter: Internal_C_n
                                        * Referenced by: '<S5>/Internal'
                                        */
  0.29153799470899638,                 /* Computed Parameter: Internal_D_n
                                        * Referenced by: '<S5>/Internal'
                                        */

  /*  Computed Parameter: Internal_A_c
   * Referenced by: '<S9>/Internal'
   */
  { -11.490274483210744, -11.102938836034694, 11.574515150914303,
    11.018698168331133 },

  /*  Computed Parameter: Internal_B_p2
   * Referenced by: '<S9>/Internal'
   */
  { 7.0496396537615063, -7.0496396537615063 },

  /*  Computed Parameter: Internal_C_nt
   * Referenced by: '<S9>/Internal'
   */
  { -0.84846310006479675, -0.87607160730320777 },
  0.53817946028306618,                 /* Computed Parameter: Internal_D_f
                                        * Referenced by: '<S9>/Internal'
                                        */
  -43.748386791387269,                 /* Computed Parameter: Internal_A_e
                                        * Referenced by: '<S6>/Internal'
                                        */
  -0.15170422219500476,                /* Computed Parameter: Internal_B_i
                                        * Referenced by: '<S6>/Internal'
                                        */
  0.48886574843455172,                 /* Computed Parameter: Internal_C_k
                                        * Referenced by: '<S6>/Internal'
                                        */
  -0.77590914522769006,                /* Computed Parameter: Internal_D_b
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
