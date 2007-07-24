/*
 *  plugin.cc
 *  CMSSW
 *
 *  Created by Chris Jones on 7/24/05.
 *
 */

#include "CondCore/PluginSystem/interface/registration_macros.h"
#include "CondFormats/SiStripObjects/interface/SiStripPedestals.h"
#include "CondFormats/DataRecord/interface/SiStripPedestalsRcd.h"
#include "CondFormats/SiStripObjects/interface/SiStripNoises.h"
#include "CondFormats/DataRecord/interface/SiStripNoisesRcd.h"
#include "CondFormats/SiStripObjects/interface/SiStripFedCabling.h"
#include "CondFormats/DataRecord/interface/SiStripFedCablingRcd.h"
#include "CondFormats/SiStripObjects/interface/SiStripLorentzAngle.h"
#include "CondFormats/DataRecord/interface/SiStripLorentzAngleRcd.h"
#include "CondFormats/SiStripObjects/interface/SiStripApvGain.h"
#include "CondFormats/DataRecord/interface/SiStripApvGainRcd.h"
#include "CondFormats/SiStripObjects/interface/SiStripBadStrip.h"
#include "CondFormats/DataRecord/interface/SiStripBadStripRcd.h"
#include "CondFormats/SiStripObjects/interface/SiStripModuleHV.h"
#include "CondFormats/DataRecord/interface/SiStripModuleHVRcd.h"
#include "CondFormats/SiStripObjects/interface/SiStripRunSummary.h"
#include "CondFormats/DataRecord/interface/SiStripRunSummaryRcd.h"

DEFINE_SEAL_MODULE();
REGISTER_PLUGIN(SiStripPedestalsRcd,SiStripPedestals);
REGISTER_PLUGIN(SiStripNoisesRcd,SiStripNoises);
REGISTER_PLUGIN(SiStripFedCablingRcd,SiStripFedCabling);
REGISTER_PLUGIN(SiStripLorentzAngleRcd,SiStripLorentzAngle);
REGISTER_PLUGIN(SiStripApvGainRcd,SiStripApvGain);
REGISTER_PLUGIN(SiStripBadStripRcd,SiStripBadStrip);
REGISTER_PLUGIN(SiStripModuleHVRcd,SiStripModuleHV);
REGISTER_PLUGIN(SiStripRunSummaryRcd,SiStripRunSummary);

