struct NSObject_IMPL {
    Class isa;
};

#ifndef _REWRITER_typedef_Foo
#define _REWRITER_typedef_Foo
typedef struct objc_object Foo;
typedef struct {} _objc_exc_Foo;
#endif

extern "C" unsigned long OBJC_IVAR_$_Foo$identity;
struct Foo_IMPL {
	struct NSObject_IMPL NSObject_IVARS;
	int identity;
};


// @implementation Foo

// @synthesize identity;
static int _I_Foo_identity(Foo * self, SEL _cmd) {
    return (*(int *)((char *)self + OBJC_IVAR_$_Foo$identity));
}

static void _I_Foo_setIdentity_(Foo * self, SEL _cmd, int identity) {
    (*(int *)((char *)self + OBJC_IVAR_$_Foo$identity)) = identity;
}

static void _I_Foo_cat(Foo * self, SEL _cmd) {
    NSLog((NSString *)&__NSConstantStringImpl__var_folders_23_sf55xwx564jgy8nzy31jhg1r0000gp_T_Foo_0f6b37_mi_0);
}

// @end


// @implementation Foo (One)

static void _I_Foo_One_cat(Foo * self, SEL _cmd) {
    NSLog((NSString *)&__NSConstantStringImpl__var_folders_23_sf55xwx564jgy8nzy31jhg1r0000gp_T_Foo_0f6b37_mi_1);
}

// @end


// @implementation Foo (Two)

static void _I_Foo_Two_cat(Foo * self, SEL _cmd) {
    NSLog((NSString *)&__NSConstantStringImpl__var_folders_23_sf55xwx564jgy8nzy31jhg1r0000gp_T_Foo_0f6b37_mi_2);
}

static void _I_Foo_Two_more(Foo * self, SEL _cmd) {

}

static void _C_Foo_Two_less(Class self, SEL _cmd) {

}

static void _I_Foo_Two_touch(Foo * self, SEL _cmd) {

}

// @end

struct _prop_t {
	const char *name;
	const char *attributes;
};

struct _objc_method {
	struct objc_selector * _cmd;
	const char *method_type;
	void  *_imp;
};

struct _protocol_t {
	void * isa;  // NULL
	const char *protocol_name;
	const struct _protocol_list_t * protocol_list; // super protocols
	const struct method_list_t *instance_methods;
	const struct method_list_t *class_methods;
	const struct method_list_t *optionalInstanceMethods;
	const struct method_list_t *optionalClassMethods;
	const struct _prop_list_t * properties;
	const unsigned int size;  // sizeof(struct _protocol_t)
	const unsigned int flags;  // = 0
	const char ** extendedMethodTypes;
};

struct _ivar_t {
	unsigned long int *offset;  // pointer to ivar offset location
	const char *name;
	const char *type;
	unsigned int alignment;
	unsigned int  size;
};

struct _class_ro_t {
	unsigned int flags;
	unsigned int instanceStart;
	unsigned int instanceSize;
	unsigned int reserved;
	const unsigned char *ivarLayout;
	const char *name;
	const struct _method_list_t *baseMethods;
	const struct _objc_protocol_list *baseProtocols;
	const struct _ivar_list_t *ivars;
	const unsigned char *weakIvarLayout;
	const struct _prop_list_t *properties;
};

struct _class_t {
	struct _class_t *isa;
	struct _class_t *superclass;
	void *cache;
	void *vtable;
	struct _class_ro_t *ro;
};

struct _category_t {
	const char *name;
	struct _class_t *cls;
	const struct _method_list_t *instance_methods;
	const struct _method_list_t *class_methods;
	const struct _protocol_list_t *protocols;
	const struct _prop_list_t *properties;
};
extern "C" __declspec(dllimport) struct objc_cache _objc_empty_cache;
#pragma warning(disable:4273)



#pragma mark - Foo

extern "C" unsigned long int OBJC_IVAR_$_Foo$identity __attribute__ ((used, section ("__DATA,__objc_ivar"))) = __OFFSETOFIVAR__(struct Foo, identity);

static struct /*_ivar_list_t*/ {
	unsigned int entsize;  // sizeof(struct _prop_t)
	unsigned int count;
	struct _ivar_t ivar_list[1];
} _OBJC_$_INSTANCE_VARIABLES_Foo __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_ivar_t),
	1,
	{{(unsigned long int *)&OBJC_IVAR_$_Foo$identity, "identity", "i", 2, 4}}
};

static struct /*_method_list_t*/ {
	unsigned int entsize;  // sizeof(struct _objc_method)
	unsigned int method_count;
	struct _objc_method method_list[3];
} _OBJC_$_INSTANCE_METHODS_Foo __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_objc_method),
	3,
	{{(struct objc_selector *)"cat", "v16@0:8", (void *)_I_Foo_cat},
	{(struct objc_selector *)"identity", "i16@0:8", (void *)_I_Foo_identity},
	{(struct objc_selector *)"setIdentity:", "v20@0:8i16", (void *)_I_Foo_setIdentity_}}
};

static struct /*_prop_list_t*/ {
	unsigned int entsize;  // sizeof(struct _prop_t)
	unsigned int count_of_properties;
	struct _prop_t prop_list[1];
} _OBJC_$_PROP_LIST_Foo __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_prop_t),
	1,
	{{"identity","Ti,Videntity"}}
};

static struct _class_ro_t _OBJC_METACLASS_RO_$_Foo __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	1, sizeof(struct _class_t), sizeof(struct _class_t), 
	(unsigned int)0, 
	0, 
	"Foo",
	0, 
	0, 
	0, 
	0, 
	0, 
};

static struct _class_ro_t _OBJC_CLASS_RO_$_Foo __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	0, __OFFSETOFIVAR__(struct Foo, identity), sizeof(struct Foo_IMPL), 
	(unsigned int)0, 
	0, 
	"Foo",
	(const struct _method_list_t *)&_OBJC_$_INSTANCE_METHODS_Foo,
	0, 
	(const struct _ivar_list_t *)&_OBJC_$_INSTANCE_VARIABLES_Foo,
	0, 
	(const struct _prop_list_t *)&_OBJC_$_PROP_LIST_Foo,
};

extern "C" __declspec(dllimport) struct _class_t OBJC_METACLASS_$_NSObject;

extern "C" __declspec(dllexport) struct _class_t OBJC_METACLASS_$_Foo __attribute__ ((used, section ("__DATA,__objc_data"))) = {
	0, // &OBJC_METACLASS_$_NSObject,
	0, // &OBJC_METACLASS_$_NSObject,
	0, // (void *)&_objc_empty_cache,
	0, // unused, was (void *)&_objc_empty_vtable,
	&_OBJC_METACLASS_RO_$_Foo,
};

extern "C" __declspec(dllimport) struct _class_t OBJC_CLASS_$_NSObject;

extern "C" __declspec(dllexport) struct _class_t OBJC_CLASS_$_Foo __attribute__ ((used, section ("__DATA,__objc_data"))) = {
	0, // &OBJC_METACLASS_$_Foo,
	0, // &OBJC_CLASS_$_NSObject,
	0, // (void *)&_objc_empty_cache,
	0, // unused, was (void *)&_objc_empty_vtable,
	&_OBJC_CLASS_RO_$_Foo,
};
static void OBJC_CLASS_SETUP_$_Foo(void ) {
	OBJC_METACLASS_$_Foo.isa = &OBJC_METACLASS_$_NSObject;
	OBJC_METACLASS_$_Foo.superclass = &OBJC_METACLASS_$_NSObject;
	OBJC_METACLASS_$_Foo.cache = &_objc_empty_cache;
	OBJC_CLASS_$_Foo.isa = &OBJC_METACLASS_$_Foo;
	OBJC_CLASS_$_Foo.superclass = &OBJC_CLASS_$_NSObject;
	OBJC_CLASS_$_Foo.cache = &_objc_empty_cache;
}
#pragma section(".objc_inithooks$B", long, read, write)
__declspec(allocate(".objc_inithooks$B")) static void *OBJC_CLASS_SETUP[] = {
	(void *)&OBJC_CLASS_SETUP_$_Foo,
};



#pragma mark - Foo(One)

static struct /*_method_list_t*/ {
	unsigned int entsize;  // sizeof(struct _objc_method)
	unsigned int method_count;
	struct _objc_method method_list[1];
} _OBJC_$_CATEGORY_INSTANCE_METHODS_Foo_$_One __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_objc_method),
	1,
	{{(struct objc_selector *)"cat", "v16@0:8", (void *)_I_Foo_One_cat}}
};

extern "C" __declspec(dllexport) struct _class_t OBJC_CLASS_$_Foo;

static struct _category_t _OBJC_$_CATEGORY_Foo_$_One __attribute__ ((used, section ("__DATA,__objc_const"))) = 
{
	"Foo",
	0, // &OBJC_CLASS_$_Foo,
	(const struct _method_list_t *)&_OBJC_$_CATEGORY_INSTANCE_METHODS_Foo_$_One,
	0,
	0,
	0,
};
static void OBJC_CATEGORY_SETUP_$_Foo_$_One(void ) {
	_OBJC_$_CATEGORY_Foo_$_One.cls = &OBJC_CLASS_$_Foo;
}



#pragma mark - Foo(Two) ----->

static struct /*_method_list_t*/ {
	unsigned int entsize;  // sizeof(struct _objc_method)
	unsigned int method_count;
	struct _objc_method method_list[3];
} _OBJC_$_CATEGORY_INSTANCE_METHODS_Foo_$_Two __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_objc_method),
	3,
	{{(struct objc_selector *)"cat", "v16@0:8", (void *)_I_Foo_Two_cat},
	{(struct objc_selector *)"more", "v16@0:8", (void *)_I_Foo_Two_more},
	{(struct objc_selector *)"touch", "v16@0:8", (void *)_I_Foo_Two_touch}}
};

static struct /*_method_list_t*/ {
	unsigned int entsize;  // sizeof(struct _objc_method)
	unsigned int method_count;
	struct _objc_method method_list[1];
} _OBJC_$_CATEGORY_CLASS_METHODS_Foo_$_Two __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_objc_method),
	1,
	{{(struct objc_selector *)"less", "v16@0:8", (void *)_C_Foo_Two_less}}
};


#pragma mark - FooProtocol Begin --->

static const char *_OBJC_PROTOCOL_METHOD_TYPES_NSObject [] __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	"c24@0:8@16",
	"#16@0:8",
	"@16@0:8",
	"@24@0:8:16",
	"@32@0:8:16@24",
	"@40@0:8:16@24@32",
	"c16@0:8",
	"c24@0:8#16",
	"c24@0:8#16",
	"c24@0:8@\"Protocol\"16",
	"c24@0:8:16",
	"@16@0:8",
	"Vv16@0:8",
	"@16@0:8",
	"Q16@0:8",
	"^{_NSZone=}16@0:8",
	"Q16@0:8",
	"#16@0:8",
	"@\"NSString\"16@0:8",
	"@\"NSString\"16@0:8"
};

static struct /*_method_list_t*/ {
	unsigned int entsize;  // sizeof(struct _objc_method)
	unsigned int method_count;
	struct _objc_method method_list[19];
} _OBJC_PROTOCOL_INSTANCE_METHODS_NSObject __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_objc_method),
	19,
	{{(struct objc_selector *)"isEqual:", "c24@0:8@16", 0},
	{(struct objc_selector *)"class", "#16@0:8", 0},
	{(struct objc_selector *)"self", "@16@0:8", 0},
	{(struct objc_selector *)"performSelector:", "@24@0:8:16", 0},
	{(struct objc_selector *)"performSelector:withObject:", "@32@0:8:16@24", 0},
	{(struct objc_selector *)"performSelector:withObject:withObject:", "@40@0:8:16@24@32", 0},
	{(struct objc_selector *)"isProxy", "c16@0:8", 0},
	{(struct objc_selector *)"isKindOfClass:", "c24@0:8#16", 0},
	{(struct objc_selector *)"isMemberOfClass:", "c24@0:8#16", 0},
	{(struct objc_selector *)"conformsToProtocol:", "c24@0:8@16", 0},
	{(struct objc_selector *)"respondsToSelector:", "c24@0:8:16", 0},
	{(struct objc_selector *)"retain", "@16@0:8", 0},
	{(struct objc_selector *)"release", "Vv16@0:8", 0},
	{(struct objc_selector *)"autorelease", "@16@0:8", 0},
	{(struct objc_selector *)"retainCount", "Q16@0:8", 0},
	{(struct objc_selector *)"zone", "^{_NSZone=}16@0:8", 0},
	{(struct objc_selector *)"hash", "Q16@0:8", 0},
	{(struct objc_selector *)"superclass", "#16@0:8", 0},
	{(struct objc_selector *)"description", "@16@0:8", 0}}
};

static struct /*_method_list_t*/ {
	unsigned int entsize;  // sizeof(struct _objc_method)
	unsigned int method_count;
	struct _objc_method method_list[1];
} _OBJC_PROTOCOL_OPT_INSTANCE_METHODS_NSObject __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_objc_method),
	1,
	{{(struct objc_selector *)"debugDescription", "@16@0:8", 0}}
};

static struct /*_prop_list_t*/ {
	unsigned int entsize;  // sizeof(struct _prop_t)
	unsigned int count_of_properties;
	struct _prop_t prop_list[4];
} _OBJC_PROTOCOL_PROPERTIES_NSObject __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_prop_t),
	4,
	{{"hash","TQ,R"},
	{"superclass","T#,R"},
	{"description","T@\"NSString\",R,C"},
	{"debugDescription","T@\"NSString\",R,C"}}
};

struct _protocol_t _OBJC_PROTOCOL_NSObject __attribute__ ((used, section ("__DATA,__datacoal_nt,coalesced"))) = {
	0,
	"NSObject",
	0,
	(const struct method_list_t *)&_OBJC_PROTOCOL_INSTANCE_METHODS_NSObject,
	0,
	(const struct method_list_t *)&_OBJC_PROTOCOL_OPT_INSTANCE_METHODS_NSObject,
	0,
	(const struct _prop_list_t *)&_OBJC_PROTOCOL_PROPERTIES_NSObject,
	sizeof(_protocol_t),
	0,
	(const char **)&_OBJC_PROTOCOL_METHOD_TYPES_NSObject
};
struct _protocol_t *_OBJC_LABEL_PROTOCOL_$_NSObject = &_OBJC_PROTOCOL_NSObject;

static const char *_OBJC_PROTOCOL_METHOD_TYPES_FooProtocol [] __attribute__ ((used, section ("__DATA,__objc_const"))) = 
{
	"v16@0:8"
};

static struct /*_protocol_list_t*/ {
	long protocol_count;  // Note, this is 32/64 bit
	struct _protocol_t *super_protocols[1];
} _OBJC_PROTOCOL_REFS_FooProtocol __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	1,
	&_OBJC_PROTOCOL_NSObject
};

static struct /*_method_list_t*/ {
	unsigned int entsize;  // sizeof(struct _objc_method)
	unsigned int method_count;
	struct _objc_method method_list[1];
} _OBJC_PROTOCOL_INSTANCE_METHODS_FooProtocol __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_objc_method),
	1,
	{{(struct objc_selector *)"touch", "v16@0:8", 0}}
};

struct _protocol_t _OBJC_PROTOCOL_FooProtocol __attribute__ ((used, section ("__DATA,__datacoal_nt,coalesced"))) = {
	0,
	"FooProtocol",
	(const struct _protocol_list_t *)&_OBJC_PROTOCOL_REFS_FooProtocol,
	(const struct method_list_t *)&_OBJC_PROTOCOL_INSTANCE_METHODS_FooProtocol,
	0,
	0,
	0,
	0,
	sizeof(_protocol_t),
	0,
	(const char **)&_OBJC_PROTOCOL_METHOD_TYPES_FooProtocol
};
struct _protocol_t *_OBJC_LABEL_PROTOCOL_$_FooProtocol = &_OBJC_PROTOCOL_FooProtocol;


#pragma mark - FooProtocol End <---


static struct /*_protocol_list_t*/ {
	long protocol_count;  // Note, this is 32/64 bit
	struct _protocol_t *super_protocols[1];
} _OBJC_CATEGORY_PROTOCOLS_$_Foo_$_Two __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	1,
	&_OBJC_PROTOCOL_FooProtocol
};

static struct /*_prop_list_t*/ {
	unsigned int entsize;  // sizeof(struct _prop_t)
	unsigned int count_of_properties;
	struct _prop_t prop_list[1];
} _OBJC_$_PROP_LIST_Foo_$_Two __attribute__ ((used, section ("__DATA,__objc_const"))) = {
	sizeof(_prop_t),
	1,
	{{"name","T@\"NSString\",C,N"}}
};

extern "C" __declspec(dllexport) struct _class_t OBJC_CLASS_$_Foo;

static struct _category_t _OBJC_$_CATEGORY_Foo_$_Two __attribute__ ((used, section ("__DATA,__objc_const"))) = 
{
	"Foo",
	0, // &OBJC_CLASS_$_Foo,
	(const struct _method_list_t *)&_OBJC_$_CATEGORY_INSTANCE_METHODS_Foo_$_Two,
	(const struct _method_list_t *)&_OBJC_$_CATEGORY_CLASS_METHODS_Foo_$_Two,
	(const struct _protocol_list_t *)&_OBJC_CATEGORY_PROTOCOLS_$_Foo_$_Two,
	(const struct _prop_list_t *)&_OBJC_$_PROP_LIST_Foo_$_Two,
};
static void OBJC_CATEGORY_SETUP_$_Foo_$_Two(void ) {
	_OBJC_$_CATEGORY_Foo_$_Two.cls = &OBJC_CLASS_$_Foo;
}

#pragma mark - Foo(Two) <-----



#pragma section(".objc_inithooks$B", long, read, write)
__declspec(allocate(".objc_inithooks$B")) static void *OBJC_CATEGORY_SETUP[] = {
	(void *)&OBJC_CATEGORY_SETUP_$_Foo_$_One,
	(void *)&OBJC_CATEGORY_SETUP_$_Foo_$_Two,
};
static struct _class_t *L_OBJC_LABEL_CLASS_$ [1] __attribute__((used, section ("__DATA, __objc_classlist,regular,no_dead_strip")))= {
	&OBJC_CLASS_$_Foo,
};
static struct _category_t *L_OBJC_LABEL_CATEGORY_$ [2] __attribute__((used, section ("__DATA, __objc_catlist,regular,no_dead_strip")))= {
	&_OBJC_$_CATEGORY_Foo_$_One,
	&_OBJC_$_CATEGORY_Foo_$_Two,
};
static struct IMAGE_INFO { unsigned version; unsigned flag; } _OBJC_IMAGE_INFO = { 0, 2 };
