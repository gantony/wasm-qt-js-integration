# WASM Qt JavaScript integration - textedit

Compile with qt wasm.

In the console, once app is running, run:

    var update_string_value = Module.cwrap('update_string_value', null, ['string'])
    var counter = 0
    setInterval(function() { update_string_value("Counter value: " + counter++)}, 1000)

