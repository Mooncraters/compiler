program try(input, output);
const
  a = 1;
  b = 'c';
  c = 2.0;
var
    d: integer;
    e: char;
    f: real;

    procedure test;
    begin
        writeln(d, e, f);
    end;

    procedure test2(i:integer);
    begin
        f:=f+i;
    end;

    function test3(i:integer):integer;
    begin
        test3:=i-1;
    end;

    function test4(var i:integer):integer;
    begin
        i:=i+1;
        test4:=i+1;
    end;

    function test5:integer;
    begin
        test5:=d+1;
    end;
begin
    d := a;
    e := b;
    f := c;
    test;
    test2(d);
    d:=test3(d);
    d:=test3(e);
    f:=test4(d);
    while d > 0 do
    begin
        d:=test3(d);
    end;
    repeat
        d:=test3(d);
        d:=test3(d);
    until d=0;
    if d > 0 then
    begin
        d:=test3(d);
    end
    else
    begin
        d:=test3(d);
    end;
end.