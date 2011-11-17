#include "configargs.h"

static char basever[] = "4.5.3";
static char datestamp[] = "20110428";
static char devphase[] = "gdc 0.30, using dmd 1.070";
static char revision[] = "";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
