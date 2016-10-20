/* Contents autogenerated by dyna_tools.py */
const char *lily_builtin_dynaload_table[] = {
    "\0\0"
    ,"R\0stdin\0File"
    ,"R\0stderr\0File"
    ,"R\0stdout\0File"
    ,"F\0print\0[A](A)"
    ,"F\0calltrace\0:List[String]"
    ,"C\02Boolean"
    ,"m:to_i\0(Boolean):Integer"
    ,"m:to_s\0(Boolean):String"
    ,"C\01Byte"
    ,"m:to_i\0(Byte):Integer"
    ,"C\01ByteString"
    ,"m:encode\0(ByteString,*String):Option[String]"
    ,"B\0DivisionByZeroError\0(msg: String) < Exception(msg) {}"
    ,"C\01Double"
    ,"m:to_i\0(Double):Integer"
    ,"C\01Dynamic"
    ,"m:<new>\0[A](A):Dynamic"
    ,"E\04Either\0[A, B]"
    ,"m:is_left\0[A,B](Either[A,B]):Boolean"
    ,"m:is_right\0[A,B](Either[A,B]):Boolean"
    ,"m:left\0[A,B](Either[A,B]):Option[A]"
    ,"m:right\0[A,B](Either[A,B]):Option[B]"
    ,"V\0Left\0(A)"
    ,"V\0Right\0(B)"
    ,"B\0Exception\0(m:String){ var @message = m var @traceback: List[String] = [] }"
    ,"C\06File"
    ,"m:close\0(File)"
    ,"m:each_line\0(File,Function(ByteString))"
    ,"m:open\0(String,String):File"
    ,"m:print\0[A](File,A)"
    ,"m:read_line\0(File):ByteString"
    ,"m:write\0[A](File,A)"
    ,"C\0Function"
    ,"C\013Hash"
    ,"m:clear\0[A,B](Hash[A,B])"
    ,"m:delete\0[A,B](Hash[A,B],A)"
    ,"m:each_pair\0[A,B](Hash[A,B],Function(A,B))"
    ,"m:get\0[A,B](Hash[A,B],A,B):B"
    ,"m:has_key\0[A,B](Hash[A,B],A):Boolean"
    ,"m:keys\0[A,B](Hash[A,B]):List[A]"
    ,"m:map_values\0[A,B,C](Hash[A,B],Function(B=>C)):Hash[A,C]"
    ,"m:merge\0[A,B](Hash[A,B],Hash[A,B]...):Hash[A,B]"
    ,"m:reject\0[A,B](Hash[A,B],Function(A,B=>Boolean)):Hash[A,B]"
    ,"m:select\0[A,B](Hash[A,B],Function(A,B=>Boolean)):Hash[A,B]"
    ,"m:size\0[A,B](Hash[A,B]):Integer"
    ,"B\0IndexError\0(msg: String) < Exception(msg) {}"
    ,"C\04Integer"
    ,"m:to_bool\0(Integer):Boolean"
    ,"m:to_byte\0(Integer):Byte"
    ,"m:to_d\0(Integer):Double"
    ,"m:to_s\0(Integer):String"
    ,"B\0IOError\0(msg: String) < Exception(msg) {}"
    ,"B\0KeyError\0(msg: String) < Exception(msg) {}"
    ,"C\021List"
    ,"m:clear\0[A](List[A])"
    ,"m:count\0[A](List[A],Function(A=>Boolean)):Integer"
    ,"m:delete_at\0[A](List[A],Integer)"
    ,"m:each\0[A](List[A],Function(A)):List[A]"
    ,"m:each_index\0[A](List[A],Function(Integer)):List[A]"
    ,"m:fill\0[A](Integer,A):List[A]"
    ,"m:fold\0[A](List[A],A,Function(A,A=>A)):A"
    ,"m:insert\0[A](List[A],Integer,A)"
    ,"m:join\0[A](List[A],*String):String"
    ,"m:map\0[A,B](List[A],Function(A=>B)):List[B]"
    ,"m:pop\0[A](List[A]):A"
    ,"m:push\0[A](List[A],A)"
    ,"m:reject\0[A](List[A],Function(A=>Boolean)):List[A]"
    ,"m:select\0[A](List[A],Function(A=>Boolean)):List[A]"
    ,"m:size\0[A](List[A]):Integer"
    ,"m:shift\0[A](List[A]):A"
    ,"m:unshift\0[A](List[A],A)"
    ,"E\012Option\0[A]"
    ,"m:and\0[A,B](Option[A],Option[B]):Option[B]"
    ,"m:and_then\0[A,B](Option[A],Function(A=>Option[B])):Option[B]"
    ,"m:is_none\0[A](Option[A]):Boolean"
    ,"m:is_some\0[A](Option[A]):Boolean"
    ,"m:map\0[A,B](Option[A],Function(A=>B)):Option[B]"
    ,"m:or\0[A](Option[A],Option[A]):Option[A]"
    ,"m:or_else\0[A](Option[A],Function(=>Option[A])):Option[A]"
    ,"m:unwrap\0[A](Option[A]):A"
    ,"m:unwrap_or\0[A](Option[A],A):A"
    ,"m:unwrap_or_else\0[A](Option[A],Function(=>A)):A"
    ,"V\0Some\0(A)"
    ,"V\0None\0"
    ,"B\0RuntimeError\0(msg: String) < Exception(msg) {}"
    ,"C\020String"
    ,"m:ends_with\0(String,String):Boolean"
    ,"m:find\0(String,String):Option[Integer]"
    ,"m:html_encode\0(String):String"
    ,"m:is_alnum\0(String):Boolean"
    ,"m:is_alpha\0(String):Boolean"
    ,"m:is_digit\0(String):Boolean"
    ,"m:is_space\0(String):Boolean"
    ,"m:lower\0(String):String"
    ,"m:lstrip\0(String,String):String"
    ,"m:parse_i\0(String):Option[Integer]"
    ,"m:rstrip\0(String,String):String"
    ,"m:split\0(String,*String):List[String]"
    ,"m:starts_with\0(String,String):Boolean"
    ,"m:strip\0(String,String):String"
    ,"m:trim\0(String):String"
    ,"m:upper\0(String):String"
    ,"B\01Tainted\0[A](v:A){ var @value = v }"
    ,"m:sanitize\0[A,B](Tainted[A],Function(A=>B)):B"
    ,"C\02Tuple"
    ,"m:merge\0(Tuple[1],Tuple[2]):Tuple[1,2]"
    ,"m:push\0[A](Tuple[1],A):Tuple[1,A]"
    ,"B\0ValueError\0(msg: String) < Exception(msg) {}"
    ,"Z"
};

void *lily_builtin_loader(lily_options *o, uint16_t *c, int id)
{
    switch (id) {
        case 1: return load_var_stdin(o, c);
        case 2: return load_var_stderr(o, c);
        case 3: return load_var_stdout(o, c);
        case 4: return lily_builtin_print;
        case 5: return lily_builtin_calltrace;
        case 7: return lily_builtin_Boolean_to_i;
        case 8: return lily_builtin_Boolean_to_s;
        case 10: return lily_builtin_Byte_to_i;
        case 12: return lily_builtin_ByteString_encode;
        case 15: return lily_builtin_Double_to_i;
        case 17: return lily_builtin_Dynamic_new;
        case 19: return lily_builtin_Either_is_left;
        case 20: return lily_builtin_Either_is_right;
        case 21: return lily_builtin_Either_left;
        case 22: return lily_builtin_Either_right;
        case 27: return lily_builtin_File_close;
        case 28: return lily_builtin_File_each_line;
        case 29: return lily_builtin_File_open;
        case 30: return lily_builtin_File_print;
        case 31: return lily_builtin_File_read_line;
        case 32: return lily_builtin_File_write;
        case 35: return lily_builtin_Hash_clear;
        case 36: return lily_builtin_Hash_delete;
        case 37: return lily_builtin_Hash_each_pair;
        case 38: return lily_builtin_Hash_get;
        case 39: return lily_builtin_Hash_has_key;
        case 40: return lily_builtin_Hash_keys;
        case 41: return lily_builtin_Hash_map_values;
        case 42: return lily_builtin_Hash_merge;
        case 43: return lily_builtin_Hash_reject;
        case 44: return lily_builtin_Hash_select;
        case 45: return lily_builtin_Hash_size;
        case 48: return lily_builtin_Integer_to_bool;
        case 49: return lily_builtin_Integer_to_byte;
        case 50: return lily_builtin_Integer_to_d;
        case 51: return lily_builtin_Integer_to_s;
        case 55: return lily_builtin_List_clear;
        case 56: return lily_builtin_List_count;
        case 57: return lily_builtin_List_delete_at;
        case 58: return lily_builtin_List_each;
        case 59: return lily_builtin_List_each_index;
        case 60: return lily_builtin_List_fill;
        case 61: return lily_builtin_List_fold;
        case 62: return lily_builtin_List_insert;
        case 63: return lily_builtin_List_join;
        case 64: return lily_builtin_List_map;
        case 65: return lily_builtin_List_pop;
        case 66: return lily_builtin_List_push;
        case 67: return lily_builtin_List_reject;
        case 68: return lily_builtin_List_select;
        case 69: return lily_builtin_List_size;
        case 70: return lily_builtin_List_shift;
        case 71: return lily_builtin_List_unshift;
        case 73: return lily_builtin_Option_and;
        case 74: return lily_builtin_Option_and_then;
        case 75: return lily_builtin_Option_is_none;
        case 76: return lily_builtin_Option_is_some;
        case 77: return lily_builtin_Option_map;
        case 78: return lily_builtin_Option_or;
        case 79: return lily_builtin_Option_or_else;
        case 80: return lily_builtin_Option_unwrap;
        case 81: return lily_builtin_Option_unwrap_or;
        case 82: return lily_builtin_Option_unwrap_or_else;
        case 87: return lily_builtin_String_ends_with;
        case 88: return lily_builtin_String_find;
        case 89: return lily_builtin_String_html_encode;
        case 90: return lily_builtin_String_is_alnum;
        case 91: return lily_builtin_String_is_alpha;
        case 92: return lily_builtin_String_is_digit;
        case 93: return lily_builtin_String_is_space;
        case 94: return lily_builtin_String_lower;
        case 95: return lily_builtin_String_lstrip;
        case 96: return lily_builtin_String_parse_i;
        case 97: return lily_builtin_String_rstrip;
        case 98: return lily_builtin_String_split;
        case 99: return lily_builtin_String_starts_with;
        case 100: return lily_builtin_String_strip;
        case 101: return lily_builtin_String_trim;
        case 102: return lily_builtin_String_upper;
        case 104: return lily_builtin_Tainted_sanitize;
        case 106: return lily_builtin_Tuple_merge;
        case 107: return lily_builtin_Tuple_push;
        default: return NULL;
    }
}

#define register_builtin(p) lily_register_package(p, "builtin", lily_builtin_dynaload_table, lily_builtin_loader);
