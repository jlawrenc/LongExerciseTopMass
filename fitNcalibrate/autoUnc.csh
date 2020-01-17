#!/bin/tcsh


set inputFolder = $1
set SignalTypes = {"jec_1_up","jec_1_down","jec_2_up","jec_2_down","jec_3_up","jec_3_down","jec_4_up","jec_4_down","jec_5_up","jec_5_down","jec_6_up","jec_6_down","jec_7_up","jec_7_down","jec_8_up","jec_8_down","jec_9_up","jec_9_down","jec_10_up","jec_10_down","jec_11_up","jec_11_down","jec_12_up","jec_12_down","jec_13_up","jec_13_down","jec_14_up","jec_14_down","jec_15_up","jec_15_down","jec_16_up","jec_16_down","jec_17_up","jec_17_down","jec_18_up","jec_18_down","jec_19_up","jec_19_down","jec_20_up","jec_20_down","jec_21_up","jec_21_down","jec_22_up","jec_22_down","jec_23_up","jec_23_down","jec_24_up","jec_24_down","jec_25_up","jec_25_down","jec_26_up","jec_26_down","jer_down","jer_up","lep_up","lep_down","norm_up","norm_down","nominal","toppT","PU_up","PU_down"}


foreach i ($SignalTypes)

	python fitPeak_Systematic.py -i "systematics/plots" -u "${i}" -l 35867.

end
