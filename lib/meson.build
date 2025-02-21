lib_sources = [
  'resp.cpp',
]

lib = static_library(
    'lib',
    lib_sources,
    install: true)

lib_dep = declare_dependency(
  link_with: lib,
  include_directories: include_directories('.')
)
