################################################################################
# Package: ResultsMetaData
################################################################################

# Declare the package name:
atlas_subdir( ResultsMetaData )

# Find the needed external(s):
find_package( ROOT COMPONENTS Core Hist )

# build a CINT dictionary for the library
atlas_add_root_dictionary ( ResultsMetaDataLib ResultsMetaDataCintDict
                            ROOT_HEADERS ResultsMetaData/ResultsMetaData.h Root/LinkDef.h
                            EXTERNAL_PACKAGES ROOT
)

# build a shared library
atlas_add_library( ResultsMetaDataLib
                   ResultsMetaData/*.h Root/*.cxx ${ResultsMetaDataCintDict}
                   PUBLIC_HEADERS ResultsMetaData
                   INCLUDE_DIRS ${ROOT_INCLUDE_DIRS}
                   LINK_LIBRARIES ${ROOT_LIBRARIES}
)

# Install files from the package:
atlas_install_data( data/* )

