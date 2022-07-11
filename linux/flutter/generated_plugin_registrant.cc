//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <file_chooser/file_chooser_plugin.h>
#include <screen_retriever/screen_retriever_plugin.h>
#include <window_manager/window_manager_plugin.h>
#include <window_utils/window_utils.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) file_chooser_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FileChooserPlugin");
  file_chooser_plugin_register_with_registrar(file_chooser_registrar);
  g_autoptr(FlPluginRegistrar) screen_retriever_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "ScreenRetrieverPlugin");
  screen_retriever_plugin_register_with_registrar(screen_retriever_registrar);
  g_autoptr(FlPluginRegistrar) window_manager_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "WindowManagerPlugin");
  window_manager_plugin_register_with_registrar(window_manager_registrar);
  g_autoptr(FlPluginRegistrar) window_utils_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "WindowUtils");
  window_utils_register_with_registrar(window_utils_registrar);
}
