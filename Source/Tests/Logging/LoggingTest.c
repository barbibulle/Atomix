/*****************************************************************
|
|   File: LoggingTest.c
|
|   Atomix Tests - Logging Test
|
|   (c) 2002-2006 Gilles Boccon-Gibod
|   Author: Gilles Boccon-Gibod (bok@bok.net)
|
 ****************************************************************/

/*----------------------------------------------------------------------
|  includes
+---------------------------------------------------------------------*/
#include "Atomix.h"

ATX_DEFINE_LOGGER(MyLogger, "atomix.test.my")
ATX_DEFINE_LOGGER(FooLogger, "atomix.test.foo")
ATX_SET_LOCAL_LOGGER("atomix.test")

/*----------------------------------------------------------------------
|  main
+---------------------------------------------------------------------*/
int 
main(int argc, char** argv)
{
    ATX_COMPILER_UNUSED(argc);
    ATX_COMPILER_UNUSED(argv);

    ATX_LOG_L(MyLogger, ATX_LOG_LEVEL_WARNING, "blabla");
    ATX_LOG_L2(MyLogger, ATX_LOG_LEVEL_WARNING, "blabla %d %d", 8, 9);

    ATX_LOG(ATX_LOG_LEVEL_WARNING, "blibli");
    ATX_LOG_2(ATX_LOG_LEVEL_INFO, "fofo %d %d", 5, 7);

    ATX_LOG_SEVERE("this is severe!");
    ATX_LOG_SEVERE_1("this is severe (%d)", 9);

    ATX_LOG_SEVERE_L(MyLogger, "this is severe!");
    ATX_LOG_SEVERE_L1(MyLogger, "this is severe (%d)", 9);

    ATX_LOG_SEVERE_L(FooLogger, "this is severe!");
    ATX_LOG_SEVERE_L1(FooLogger, "this is severe (%d)", 9);

    ATX_LOG_SEVERE("severe");
    ATX_LOG_WARNING("warning");
    ATX_LOG_INFO("info");
    ATX_LOG_FINE("fine");
    ATX_LOG_FINER("finer");
    ATX_LOG_FINEST("finest");

    ATX_LOG_SEVERE_L(FooLogger, "severe");
    ATX_LOG_WARNING_L(FooLogger, "warning");
    ATX_LOG_INFO_L(FooLogger, "info");
    ATX_LOG_FINE_L(FooLogger, "fine");
    ATX_LOG_FINER_L(FooLogger, "finer");
    ATX_LOG_FINEST_L(FooLogger, "finest");

    return 0;
}
