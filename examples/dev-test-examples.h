#ifndef DEV_TEST_EXAMPLES_H
#define DEV_TEST_EXAMPLES_H

//C++ includes
#include <cstdio>
//Cantera includes
//Creating kinetics and thermo objects
#include "cantera/thermo.h"
#include "cantera/kinetics.h"
#include "cantera/kinetics/GasKinetics.h"
#include "cantera/base/Interface.h"
#include "cantera/transport.h"
#include "cantera/numerics/AdaptivePreconditioner.h"
//Creating reactor and reactor network
#include "cantera/zerodim.h"

using namespace Cantera;

void JacobianProfiling();
void PreconditionerTestRun();
void HydrogenAutoIgnition();
void EigenTest();
void JetA();
void SurfJacTest();

#endif
