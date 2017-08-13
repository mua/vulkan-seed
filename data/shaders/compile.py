# Compile all shaders in this directory recursively.

import os
from subprocess import call

compiler_path = os.path.join(os.environ.get("VULKAN_SDK"), "Bin", "glslangValidator.exe")

# Compile all files that share the same name but end with ["frag", "vert"] as one shader module.
for (root, dirs, files) in os.walk("."):
    for file in files:
      if (file.endswith("vert") or
        file.endswith("tesc") or 
        file.endswith("tese") or 
        file.endswith("geom") or
        file.endswith("frag") or
        file.endswith("comp")):
          call([compiler_path, "-V", file, "-o", file + ".spv"])