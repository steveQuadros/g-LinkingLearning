cxx_binary(
  name = 'demo',
  header_namespace = 'demo',
  compiler_flags = [ 
    '-std=c++17', 
  ], 
  headers = subdir_glob([
    ('demo/include', '**/*.hpp'),
  ]),
  srcs = glob([
    'demo/src/**/*.cpp',
  ]),
  deps = [
    '//mathutils:mathutils',
    ':folly'
  ],
)