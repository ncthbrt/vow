Vow.return(Js.Promise.resolve("hello"))
|> Vow.sideEffect((r) => Js.Promise.then_((str) => Js.Promise.resolve(Js.log(str)), r) |> ignore);

Vow.return("hello") |> Vow.sideEffect(Js.log);

Vow.return(Vow.return("hello")) |> Vow.sideEffect((x) => x |> Vow.sideEffect(Js.log));