#include <stdio.h>
#include <caml/memory.h>
#include <caml/callback.h>
int function_in_wrapper(void){
   CAMLparam0();
   printf("Calling back into OCaml...\n");
   CAMLlocal2(provided_to_wrapper_v, from_callback);
   provided_to_wrapper_v = *caml_named_value("provided_to_wrapper");
   from_callback = caml_callback(provided_to_wrapper_v, Val_unit);
   return 0;
}

