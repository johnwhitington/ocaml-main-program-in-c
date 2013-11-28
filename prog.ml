let provided_to_wrapper () =
  print_endline "In wrapper..."
 
let _ = Callback.register "provided_to_wrapper" provided_to_wrapper

let _ =
  Array.iter ignore (Unix.environment ());
  let x = Bigarray.Array1.create Bigarray.int8_unsigned Bigarray.c_layout 1 in
    x.{0} <- 1;
    print_endline "Hello World, OCaml";;

