file(REMOVE_RECURSE
  "ANN.pdb"
  "ANN"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/ANN_2.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
