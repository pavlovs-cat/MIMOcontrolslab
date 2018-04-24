/*
 * MLC_Aero_Simulink2016a_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "MLC_Aero_Simulink2016a".
 *
 * Model version              : 1.101
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Tue Apr 24 11:56:30 2018
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
   * Referenced by: '<S18>/Constant'
   */
  { 0.0, 1.0, 0.0 },

  /*  Mask Parameter: Yellow_color
   * Referenced by: '<S20>/Constant'
   */
  { 1.0, 1.0, 0.0 },
  1.0,                                 /* Mask Parameter: PitchBiasRemoval_end_time
                                        * Referenced by: '<S19>/Step: end_time'
                                        */
  0.0,                                 /* Mask Parameter: PitchBiasRemoval_start_time
                                        * Referenced by: '<S19>/Step: start_time'
                                        */
  1.0,                                 /* Mask Parameter: PitchBiasRemoval_switch_id
                                        * Referenced by: '<S19>/Constant'
                                        */
  0,                                   /* Mask Parameter: HILReadTimebase_clock
                                        * Referenced by: '<S11>/HIL Read Timebase'
                                        */

  /*  Mask Parameter: HILReadTimebase_analog_channels
   * Referenced by: '<S11>/HIL Read Timebase'
   */
  { 0U, 1U },

  /*  Mask Parameter: HILWrite_analog_channels
   * Referenced by: '<S11>/HIL Write'
   */
  { 0U, 1U },

  /*  Mask Parameter: HILReadTimebase_encoder_channel
   * Referenced by: '<S11>/HIL Read Timebase'
   */
  { 2U, 3U },

  /*  Mask Parameter: HILReadTimebase_other_channels
   * Referenced by: '<S11>/HIL Read Timebase'
   */
  { 4000U, 4002U, 14000U, 14001U },

  /*  Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S11>/HIL Write'
   */
  { 11000U, 11001U, 11002U },
  500U,                                /* Mask Parameter: HILReadTimebase_samples_in_buff
                                        * Referenced by: '<S11>/HIL Read Timebase'
                                        */
  24.0,                                /* Expression: 24
                                        * Referenced by: '<S11>/+//- 24V'
                                        */
  -24.0,                               /* Expression: -24
                                        * Referenced by: '<S11>/+//- 24V'
                                        */
  0.0,                                 /* Computed Parameter: x_avg_n_Y0
                                        * Referenced by: '<S21>/x_avg_n'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S25>/unity'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S25>/Unit Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Sum( k=1,n-1, x(k) )'
                                        */
  0.0,                                 /* Expression: [0]
                                        * Referenced by: '<S22>/zero'
                                        */
  0.0,                                 /* Expression: [0]
                                        * Referenced by: '<S23>/Vbiased'
                                        */
  0.0,                                 /* Expression: [0]
                                        * Referenced by: '<S24>/Vunbiased'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Step: start_time'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S19>/Step: start_time'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Step: end_time'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S19>/Step: end_time'
                                        */
  1.0,                                 /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1.0,                                 /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: final_analog_outputs
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */

  /*  Expression: final_other_outputs
   * Referenced by: '<S11>/HIL Initialize'
   */
  { 1.0, 0.0, 0.0 },
  3.0,                                 /* Expression: analog_input_maximums
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  -3.0,                                /* Expression: analog_input_minimums
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  24.0,                                /* Expression: analog_output_maximums
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  -24.0,                               /* Expression: analog_output_minimums
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: initial_analog_outputs
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */

  /*  Expression: initial_other_outputs
   * Referenced by: '<S11>/HIL Initialize'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: watchdog_other_outputs
   * Referenced by: '<S11>/HIL Initialize'
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
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<Root>/Yaw Reference'
                                        */

  /*  Expression: [2*pi/2048 2*pi/4096]
   * Referenced by: '<S11>/Counts to rads'
   */
  { 0.0030679615757712823, 0.0015339807878856412 },
  -50.0,                               /* Computed Parameter: Internal_1_1_A
                                        * Referenced by: '<S1>/Internal_1_1'
                                        */
  256.0,                               /* Computed Parameter: Internal_1_1_B
                                        * Referenced by: '<S1>/Internal_1_1'
                                        */
  -315.0,                              /* Computed Parameter: Internal_1_1_C
                                        * Referenced by: '<S1>/Internal_1_1'
                                        */
  1711.0,                              /* Computed Parameter: Internal_1_1_D
                                        * Referenced by: '<S1>/Internal_1_1'
                                        */
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S1>/Internal_1_1'
                                        */
  -50.0,                               /* Computed Parameter: Internal_1_2_A
                                        * Referenced by: '<S1>/Internal_1_2'
                                        */
  256.0,                               /* Computed Parameter: Internal_1_2_B
                                        * Referenced by: '<S1>/Internal_1_2'
                                        */
  283.97265625,                        /* Computed Parameter: Internal_1_2_C
                                        * Referenced by: '<S1>/Internal_1_2'
                                        */
  -1557.0,                             /* Computed Parameter: Internal_1_2_D
                                        * Referenced by: '<S1>/Internal_1_2'
                                        */
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S1>/Internal_1_2'
                                        */

  /*  Computed Parameter: Internal_A
   * Referenced by: '<S9>/Internal'
   */
  { -0.24597679974202125, 9.59121223891128E-16, 1.0762388400681565E-15,
    0.53822918011941834, -0.1509088889550799, -0.8262734892756507,
    7.93026800835586E-17, -0.5997201367501146, 0.60203821801008506,
    -4.095175578834344E-17, -5.8900415881835748E-17, 3.60629447177426E-17,
    3.9204757091415587E-18, 0.50976602636775681, -0.51208410762773049,
    -1.5863960908755143E-18, 4.4595141246611753E-18, 6.7832122658632456E-17,
    -0.8200700727739606, -3.3860677264264547, -3.2219607287955019,
    -0.16767295956199477, 1.195317589665807, -0.036399823917646554,
    -0.062948425855574711, 0.21927427602445859, 0.20864706889117057,
    -0.80137884842589813, -0.18049592544986789, -0.56209178408779958,
    1.4143041486993448, -2.7103778760936166, -2.5790184315616256,
    0.06230433705888732, 0.96211333475324035, -9.5411675257182978E-18 },

  /*  Computed Parameter: Internal_B
   * Referenced by: '<S9>/Internal'
   */
  { 1.4484007558068028E-16, -1.5340832068285686, 1.5340832068285686,
    -0.4768764605115754, 0.030881467554737477, -0.38171575781341016 },

  /*  Computed Parameter: Internal_C
   * Referenced by: '<S9>/Internal'
   */
  { -0.30256325931400929, 2.3592641818743639E-33, 1.1555579666323415E-33,
    3.4694469519536142E-18, -1.3660947373317356E-17 },
  -50.0,                               /* Computed Parameter: Internal_2_1_A
                                        * Referenced by: '<S1>/Internal_2_1'
                                        */
  256.0,                               /* Computed Parameter: Internal_2_1_B
                                        * Referenced by: '<S1>/Internal_2_1'
                                        */
  -444.46484375,                       /* Computed Parameter: Internal_2_1_C
                                        * Referenced by: '<S1>/Internal_2_1'
                                        */
  2432.0,                              /* Computed Parameter: Internal_2_1_D
                                        * Referenced by: '<S1>/Internal_2_1'
                                        */
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S1>/Internal_2_1'
                                        */
  -50.0,                               /* Computed Parameter: Internal_2_2_A
                                        * Referenced by: '<S1>/Internal_2_2'
                                        */
  256.0,                               /* Computed Parameter: Internal_2_2_B
                                        * Referenced by: '<S1>/Internal_2_2'
                                        */
  -167.05859375,                       /* Computed Parameter: Internal_2_2_C
                                        * Referenced by: '<S1>/Internal_2_2'
                                        */
  921.5,                               /* Computed Parameter: Internal_2_2_D
                                        * Referenced by: '<S1>/Internal_2_2'
                                        */
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S1>/Internal_2_2'
                                        */

  /*  Computed Parameter: Internal_A_e
   * Referenced by: '<S10>/Internal'
   */
  { 1.7936620343357659E-43, 3.9453154238460716E-15, 1.3948796450607176E-15,
    -8.4875316584024545E-31, -9.79111322235772E-6, -1.0289812719227916E-5,
    -0.47140452079103162, -0.88920961756903039, -0.3143830752396789,
    4.0734683039759657E-6, 3.6123098832838578E-17, 3.7968084065096176E-17,
    -0.16666666666666666, -0.31438307523967896, -0.11115120219612878,
    -1.1521508242352531E-5, 2.0487581177281813E-16, 2.1531577519204315E-16,
    -2.4369322580849835E-16, 3.858029714333391E-16, -1.2116141706332266,
    -1.3723634553477568, -1.4422632664481096, -0.51208410762773049,
    0.50976602636775681, 0.602038218010085, -0.59972013675011482 },

  /*  Computed Parameter: Internal_B_i
   * Referenced by: '<S10>/Internal'
   */
  { 0.37988980385978249, -1.4018134643567798E-12, -7.94927087118443E-12,
    53246.946699167209, -402150.70817086828, 402150.70817086828 },

  /*  Computed Parameter: Internal_C_k
   * Referenced by: '<S10>/Internal'
   */
  { 1.0606601717798214, -2.0816681711721685E-17 },

  /*  Expression: [0 0]
   * Referenced by: '<S11>/No Control'
   */
  { 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Motor Enable'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/LED Colour'
                                        */

  /*  Computed Parameter: Internal_A_j
   * Referenced by: '<S12>/Internal'
   */
  { -10.876940116255021, -10.383012431857125, 10.966894226637375,
    10.293058321474767, -10.876940116255021, -10.383012431857125,
    10.966894226637375, 10.293058321474767 },

  /*  Computed Parameter: Internal_B_p
   * Referenced by: '<S12>/Internal'
   */
  { 6.463502705379109, -6.463502705379109 },

  /*  Computed Parameter: Internal_C_f
   * Referenced by: '<S12>/Internal'
   */
  { -0.84454806317633679, -0.88756418244937263 },
  0.52665842020567433,                 /* Computed Parameter: Internal_D
                                        * Referenced by: '<S12>/Internal'
                                        */

  /*  Computed Parameter: Internal_A_c
   * Referenced by: '<S13>/Internal'
   */
  { -10.876940116255021, -10.383012431857125, 10.966894226637375,
    10.293058321474767, -10.876940116255021, -10.383012431857125,
    10.966894226637375, 10.293058321474767 },

  /*  Computed Parameter: Internal_B_p2
   * Referenced by: '<S13>/Internal'
   */
  { 6.463502705379109, -6.463502705379109 },

  /*  Computed Parameter: Internal_C_n
   * Referenced by: '<S13>/Internal'
   */
  { -0.84454806317633679, -0.88756418244937263 },
  0.52665842020567433,                 /* Computed Parameter: Internal_D_f
                                        * Referenced by: '<S13>/Internal'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKChannels
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIConfiguration
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */

  /*  Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S11>/HIL Initialize'
   */
  { 0U, 1U },

  /*  Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<S11>/HIL Initialize'
   */
  { 0U, 1U },

  /*  Computed Parameter: HILInitialize_DOChannels
   * Referenced by: '<S11>/HIL Initialize'
   */
  { 0U, 1U },

  /*  Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S11>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U },
  4U,                                  /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */

  /*  Computed Parameter: HILInitialize_OOChannels
   * Referenced by: '<S11>/HIL Initialize'
   */
  { 11000U, 11001U, 11002U },
  0,                                   /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S11>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILReadTimebase_Active
                                        * Referenced by: '<S11>/HIL Read Timebase'
                                        */
  0                                    /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S11>/HIL Write'
                                        */
};
