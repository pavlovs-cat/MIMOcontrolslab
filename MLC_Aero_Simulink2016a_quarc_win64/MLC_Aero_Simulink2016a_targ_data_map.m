  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (MLC_Aero_Simulink2016a_P)
    ;%
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_P.Green_color
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_P.Yellow_color
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% MLC_Aero_Simulink2016a_P.PitchBiasRemoval_end_time
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6;
	
	  ;% MLC_Aero_Simulink2016a_P.PitchBiasRemoval_start_time
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 7;
	
	  ;% MLC_Aero_Simulink2016a_P.PitchBiasRemoval_switch_id
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_P.HILReadTimebase_clock
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_P.HILReadTimebase_analog_channels
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_P.HILWrite_analog_channels
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 2;
	
	  ;% MLC_Aero_Simulink2016a_P.HILReadTimebase_encoder_channel
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 4;
	
	  ;% MLC_Aero_Simulink2016a_P.HILReadTimebase_other_channels
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 6;
	
	  ;% MLC_Aero_Simulink2016a_P.HILWrite_other_channels
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 10;
	
	  ;% MLC_Aero_Simulink2016a_P.HILReadTimebase_samples_in_buff
	  section.data(6).logicalSrcIdx = 11;
	  section.data(6).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 55;
      section.data(55)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_P.u4V_UpperSat
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_P.u4V_LowerSat
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 1;
	
	  ;% MLC_Aero_Simulink2016a_P.x_avg_n_Y0
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 2;
	
	  ;% MLC_Aero_Simulink2016a_P.unity_Value
	  section.data(4).logicalSrcIdx = 15;
	  section.data(4).dtTransOffset = 3;
	
	  ;% MLC_Aero_Simulink2016a_P.UnitDelay_InitialCondition
	  section.data(5).logicalSrcIdx = 16;
	  section.data(5).dtTransOffset = 4;
	
	  ;% MLC_Aero_Simulink2016a_P.Sumk1n1xk_InitialCondition
	  section.data(6).logicalSrcIdx = 17;
	  section.data(6).dtTransOffset = 5;
	
	  ;% MLC_Aero_Simulink2016a_P.zero_Y0
	  section.data(7).logicalSrcIdx = 18;
	  section.data(7).dtTransOffset = 6;
	
	  ;% MLC_Aero_Simulink2016a_P.Vbiased_Y0
	  section.data(8).logicalSrcIdx = 19;
	  section.data(8).dtTransOffset = 7;
	
	  ;% MLC_Aero_Simulink2016a_P.Vunbiased_Y0
	  section.data(9).logicalSrcIdx = 20;
	  section.data(9).dtTransOffset = 8;
	
	  ;% MLC_Aero_Simulink2016a_P.Stepstart_time_Y0
	  section.data(10).logicalSrcIdx = 21;
	  section.data(10).dtTransOffset = 9;
	
	  ;% MLC_Aero_Simulink2016a_P.Stepstart_time_YFinal
	  section.data(11).logicalSrcIdx = 22;
	  section.data(11).dtTransOffset = 10;
	
	  ;% MLC_Aero_Simulink2016a_P.Stepend_time_Y0
	  section.data(12).logicalSrcIdx = 23;
	  section.data(12).dtTransOffset = 11;
	
	  ;% MLC_Aero_Simulink2016a_P.Stepend_time_YFinal
	  section.data(13).logicalSrcIdx = 24;
	  section.data(13).dtTransOffset = 12;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_OOTerminate
	  section.data(14).logicalSrcIdx = 25;
	  section.data(14).dtTransOffset = 13;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_OOExit
	  section.data(15).logicalSrcIdx = 26;
	  section.data(15).dtTransOffset = 14;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_OOStart
	  section.data(16).logicalSrcIdx = 27;
	  section.data(16).dtTransOffset = 15;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_OOEnter
	  section.data(17).logicalSrcIdx = 28;
	  section.data(17).dtTransOffset = 16;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOFinal
	  section.data(18).logicalSrcIdx = 29;
	  section.data(18).dtTransOffset = 17;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_OOFinal
	  section.data(19).logicalSrcIdx = 30;
	  section.data(19).dtTransOffset = 18;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AIHigh
	  section.data(20).logicalSrcIdx = 31;
	  section.data(20).dtTransOffset = 21;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AILow
	  section.data(21).logicalSrcIdx = 32;
	  section.data(21).dtTransOffset = 22;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOHigh
	  section.data(22).logicalSrcIdx = 33;
	  section.data(22).dtTransOffset = 23;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOLow
	  section.data(23).logicalSrcIdx = 34;
	  section.data(23).dtTransOffset = 24;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOInitial
	  section.data(24).logicalSrcIdx = 35;
	  section.data(24).dtTransOffset = 25;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOWatchdog
	  section.data(25).logicalSrcIdx = 36;
	  section.data(25).dtTransOffset = 26;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_OOInitial
	  section.data(26).logicalSrcIdx = 37;
	  section.data(26).dtTransOffset = 27;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_OOWatchdog
	  section.data(27).logicalSrcIdx = 38;
	  section.data(27).dtTransOffset = 30;
	
	  ;% MLC_Aero_Simulink2016a_P.PitchReference_Amplitude
	  section.data(28).logicalSrcIdx = 39;
	  section.data(28).dtTransOffset = 33;
	
	  ;% MLC_Aero_Simulink2016a_P.PitchReference_Frequency
	  section.data(29).logicalSrcIdx = 40;
	  section.data(29).dtTransOffset = 34;
	
	  ;% MLC_Aero_Simulink2016a_P.YawReference_Amplitude
	  section.data(30).logicalSrcIdx = 41;
	  section.data(30).dtTransOffset = 35;
	
	  ;% MLC_Aero_Simulink2016a_P.YawReference_Frequency
	  section.data(31).logicalSrcIdx = 42;
	  section.data(31).dtTransOffset = 36;
	
	  ;% MLC_Aero_Simulink2016a_P.Countstorads_Gain
	  section.data(32).logicalSrcIdx = 43;
	  section.data(32).dtTransOffset = 37;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_A
	  section.data(33).logicalSrcIdx = 44;
	  section.data(33).dtTransOffset = 39;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_B
	  section.data(34).logicalSrcIdx = 45;
	  section.data(34).dtTransOffset = 75;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_C
	  section.data(35).logicalSrcIdx = 46;
	  section.data(35).dtTransOffset = 87;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_D
	  section.data(36).logicalSrcIdx = 47;
	  section.data(36).dtTransOffset = 99;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_A_j
	  section.data(37).logicalSrcIdx = 48;
	  section.data(37).dtTransOffset = 103;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_B_p
	  section.data(38).logicalSrcIdx = 49;
	  section.data(38).dtTransOffset = 107;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_C_f
	  section.data(39).logicalSrcIdx = 50;
	  section.data(39).dtTransOffset = 109;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_D_a
	  section.data(40).logicalSrcIdx = 51;
	  section.data(40).dtTransOffset = 111;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_A_j5
	  section.data(41).logicalSrcIdx = 52;
	  section.data(41).dtTransOffset = 112;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_B_g
	  section.data(42).logicalSrcIdx = 53;
	  section.data(42).dtTransOffset = 113;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_C_n
	  section.data(43).logicalSrcIdx = 54;
	  section.data(43).dtTransOffset = 114;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_D_n
	  section.data(44).logicalSrcIdx = 55;
	  section.data(44).dtTransOffset = 115;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_A_c
	  section.data(45).logicalSrcIdx = 56;
	  section.data(45).dtTransOffset = 116;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_B_p2
	  section.data(46).logicalSrcIdx = 57;
	  section.data(46).dtTransOffset = 120;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_C_nt
	  section.data(47).logicalSrcIdx = 58;
	  section.data(47).dtTransOffset = 122;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_D_f
	  section.data(48).logicalSrcIdx = 59;
	  section.data(48).dtTransOffset = 124;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_A_e
	  section.data(49).logicalSrcIdx = 60;
	  section.data(49).dtTransOffset = 125;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_B_i
	  section.data(50).logicalSrcIdx = 61;
	  section.data(50).dtTransOffset = 126;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_C_k
	  section.data(51).logicalSrcIdx = 62;
	  section.data(51).dtTransOffset = 127;
	
	  ;% MLC_Aero_Simulink2016a_P.Internal_D_b
	  section.data(52).logicalSrcIdx = 63;
	  section.data(52).dtTransOffset = 128;
	
	  ;% MLC_Aero_Simulink2016a_P.NoControl_Value
	  section.data(53).logicalSrcIdx = 64;
	  section.data(53).dtTransOffset = 129;
	
	  ;% MLC_Aero_Simulink2016a_P.MotorEnable_Threshold
	  section.data(54).logicalSrcIdx = 65;
	  section.data(54).dtTransOffset = 131;
	
	  ;% MLC_Aero_Simulink2016a_P.LEDColour_Threshold
	  section.data(55).logicalSrcIdx = 66;
	  section.data(55).dtTransOffset = 132;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 67;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AIConfiguration
	  section.data(2).logicalSrcIdx = 68;
	  section.data(2).dtTransOffset = 1;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOWatchdog
	  section.data(3).logicalSrcIdx = 69;
	  section.data(3).dtTransOffset = 2;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_EIInitial
	  section.data(4).logicalSrcIdx = 70;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AIChannels
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOChannels
	  section.data(2).logicalSrcIdx = 72;
	  section.data(2).dtTransOffset = 2;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOChannels
	  section.data(3).logicalSrcIdx = 73;
	  section.data(3).dtTransOffset = 4;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_EIChannels
	  section.data(4).logicalSrcIdx = 74;
	  section.data(4).dtTransOffset = 6;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_EIQuadrature
	  section.data(5).logicalSrcIdx = 75;
	  section.data(5).dtTransOffset = 10;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_OOChannels
	  section.data(6).logicalSrcIdx = 76;
	  section.data(6).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 37;
      section.data(37)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_Active
	  section.data(1).logicalSrcIdx = 77;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOTerminate
	  section.data(2).logicalSrcIdx = 78;
	  section.data(2).dtTransOffset = 1;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOExit
	  section.data(3).logicalSrcIdx = 79;
	  section.data(3).dtTransOffset = 2;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOTerminate
	  section.data(4).logicalSrcIdx = 80;
	  section.data(4).dtTransOffset = 3;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOExit
	  section.data(5).logicalSrcIdx = 81;
	  section.data(5).dtTransOffset = 4;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_POTerminate
	  section.data(6).logicalSrcIdx = 82;
	  section.data(6).dtTransOffset = 5;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_POExit
	  section.data(7).logicalSrcIdx = 83;
	  section.data(7).dtTransOffset = 6;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_CKPStart
	  section.data(8).logicalSrcIdx = 84;
	  section.data(8).dtTransOffset = 7;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_CKPEnter
	  section.data(9).logicalSrcIdx = 85;
	  section.data(9).dtTransOffset = 8;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_CKStart
	  section.data(10).logicalSrcIdx = 86;
	  section.data(10).dtTransOffset = 9;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_CKEnter
	  section.data(11).logicalSrcIdx = 87;
	  section.data(11).dtTransOffset = 10;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AIPStart
	  section.data(12).logicalSrcIdx = 88;
	  section.data(12).dtTransOffset = 11;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AIPEnter
	  section.data(13).logicalSrcIdx = 89;
	  section.data(13).dtTransOffset = 12;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOPStart
	  section.data(14).logicalSrcIdx = 90;
	  section.data(14).dtTransOffset = 13;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOPEnter
	  section.data(15).logicalSrcIdx = 91;
	  section.data(15).dtTransOffset = 14;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOStart
	  section.data(16).logicalSrcIdx = 92;
	  section.data(16).dtTransOffset = 15;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOEnter
	  section.data(17).logicalSrcIdx = 93;
	  section.data(17).dtTransOffset = 16;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_AOReset
	  section.data(18).logicalSrcIdx = 94;
	  section.data(18).dtTransOffset = 17;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOPStart
	  section.data(19).logicalSrcIdx = 95;
	  section.data(19).dtTransOffset = 18;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOPEnter
	  section.data(20).logicalSrcIdx = 96;
	  section.data(20).dtTransOffset = 19;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOStart
	  section.data(21).logicalSrcIdx = 97;
	  section.data(21).dtTransOffset = 20;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOEnter
	  section.data(22).logicalSrcIdx = 98;
	  section.data(22).dtTransOffset = 21;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOReset
	  section.data(23).logicalSrcIdx = 99;
	  section.data(23).dtTransOffset = 22;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_EIPStart
	  section.data(24).logicalSrcIdx = 100;
	  section.data(24).dtTransOffset = 23;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_EIPEnter
	  section.data(25).logicalSrcIdx = 101;
	  section.data(25).dtTransOffset = 24;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_EIStart
	  section.data(26).logicalSrcIdx = 102;
	  section.data(26).dtTransOffset = 25;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_EIEnter
	  section.data(27).logicalSrcIdx = 103;
	  section.data(27).dtTransOffset = 26;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_POPStart
	  section.data(28).logicalSrcIdx = 104;
	  section.data(28).dtTransOffset = 27;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_POPEnter
	  section.data(29).logicalSrcIdx = 105;
	  section.data(29).dtTransOffset = 28;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_POStart
	  section.data(30).logicalSrcIdx = 106;
	  section.data(30).dtTransOffset = 29;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_POEnter
	  section.data(31).logicalSrcIdx = 107;
	  section.data(31).dtTransOffset = 30;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_POReset
	  section.data(32).logicalSrcIdx = 108;
	  section.data(32).dtTransOffset = 31;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_OOReset
	  section.data(33).logicalSrcIdx = 109;
	  section.data(33).dtTransOffset = 32;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOFinal
	  section.data(34).logicalSrcIdx = 110;
	  section.data(34).dtTransOffset = 33;
	
	  ;% MLC_Aero_Simulink2016a_P.HILInitialize_DOInitial
	  section.data(35).logicalSrcIdx = 111;
	  section.data(35).dtTransOffset = 34;
	
	  ;% MLC_Aero_Simulink2016a_P.HILReadTimebase_Active
	  section.data(36).logicalSrcIdx = 112;
	  section.data(36).dtTransOffset = 35;
	
	  ;% MLC_Aero_Simulink2016a_P.HILWrite_Active
	  section.data(37).logicalSrcIdx = 113;
	  section.data(37).dtTransOffset = 36;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (MLC_Aero_Simulink2016a_B)
    ;%
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_B.PitchReference
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_B.YawReference
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% MLC_Aero_Simulink2016a_B.Countstorads
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% MLC_Aero_Simulink2016a_B.Sum
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 4;
	
	  ;% MLC_Aero_Simulink2016a_B.Sum_a
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 5;
	
	  ;% MLC_Aero_Simulink2016a_B.Internal
	  section.data(6).logicalSrcIdx = 6;
	  section.data(6).dtTransOffset = 7;
	
	  ;% MLC_Aero_Simulink2016a_B.Internal_m
	  section.data(7).logicalSrcIdx = 7;
	  section.data(7).dtTransOffset = 9;
	
	  ;% MLC_Aero_Simulink2016a_B.Internal_o
	  section.data(8).logicalSrcIdx = 8;
	  section.data(8).dtTransOffset = 10;
	
	  ;% MLC_Aero_Simulink2016a_B.MotorEnable
	  section.data(9).logicalSrcIdx = 9;
	  section.data(9).dtTransOffset = 11;
	
	  ;% MLC_Aero_Simulink2016a_B.TmpSignalConversionAtToWorkspac
	  section.data(10).logicalSrcIdx = 10;
	  section.data(10).dtTransOffset = 13;
	
	  ;% MLC_Aero_Simulink2016a_B.Stepend_time
	  section.data(11).logicalSrcIdx = 11;
	  section.data(11).dtTransOffset = 15;
	
	  ;% MLC_Aero_Simulink2016a_B.Count
	  section.data(12).logicalSrcIdx = 12;
	  section.data(12).dtTransOffset = 16;
	
	  ;% MLC_Aero_Simulink2016a_B.Sum_b
	  section.data(13).logicalSrcIdx = 13;
	  section.data(13).dtTransOffset = 17;
	
	  ;% MLC_Aero_Simulink2016a_B.div
	  section.data(14).logicalSrcIdx = 14;
	  section.data(14).dtTransOffset = 18;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (MLC_Aero_Simulink2016a_DW)
    ;%
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_DW.UnitDelay_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_DW.Sumk1n1xk_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_AIMinimums
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_AIMaximums
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_AOMinimums
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_AOMaximums
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_AOVoltages
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_FilterFrequency
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_DW.HILReadTimebase_Task
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_DW.HILWrite_PWORK
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_DW.Angles_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% MLC_Aero_Simulink2016a_DW.Errors_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
	  ;% MLC_Aero_Simulink2016a_DW.MotorVoltages_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 3;
	
	  ;% MLC_Aero_Simulink2016a_DW.Scope_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 14;
	  section.data(5).dtTransOffset = 4;
	
	  ;% MLC_Aero_Simulink2016a_DW.Scope1_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 15;
	  section.data(6).dtTransOffset = 5;
	
	  ;% MLC_Aero_Simulink2016a_DW.ToWorkspace_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 16;
	  section.data(7).dtTransOffset = 7;
	
	  ;% MLC_Aero_Simulink2016a_DW.ToWorkspace1_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 17;
	  section.data(8).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_AIConfigValues
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 1;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_DOStates
	  section.data(3).logicalSrcIdx = 20;
	  section.data(3).dtTransOffset = 3;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_QuadratureModes
	  section.data(4).logicalSrcIdx = 21;
	  section.data(4).dtTransOffset = 5;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_InitialEICounts
	  section.data(5).logicalSrcIdx = 22;
	  section.data(5).dtTransOffset = 9;
	
	  ;% MLC_Aero_Simulink2016a_DW.HILReadTimebase_EncoderBuffer
	  section.data(6).logicalSrcIdx = 23;
	  section.data(6).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_SubsysRanB
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_DW.SwitchCase_ActiveSubsystem
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
	  ;% MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem_Subsy
	  section.data(3).logicalSrcIdx = 26;
	  section.data(3).dtTransOffset = 2;
	
	  ;% MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem1_Subs
	  section.data(4).logicalSrcIdx = 27;
	  section.data(4).dtTransOffset = 3;
	
	  ;% MLC_Aero_Simulink2016a_DW.SwitchCaseActionSubsystem2_Subs
	  section.data(5).logicalSrcIdx = 28;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% MLC_Aero_Simulink2016a_DW.HILInitialize_DOBits
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
	  ;% MLC_Aero_Simulink2016a_DW.EnabledMovingAverage_MODE
	  section.data(2).logicalSrcIdx = 30;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2711120603;
  targMap.checksum1 = 1199394021;
  targMap.checksum2 = 3370729944;
  targMap.checksum3 = 1172449540;

