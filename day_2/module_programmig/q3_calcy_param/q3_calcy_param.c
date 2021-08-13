#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/string.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ashwin");

static int add(int,int);
static int mul(int,int);
static int sub(int,int);
static int div(int,int);

static char* option ="add";
static int var1 =50;
static int var2 =100;

module_param(option,charp,S_IRUGO);
module_param(var1,int,S_IRUGO);
module_param(var2,int,S_IRUGO);


static int param_init(void)
{
	if(strcmp(option,"add")==0)
	{
	 printk(KERN_ALERT"add : %d\n",add(var1,var2));
	}
	else if(strcmp(option,"mul")==0)
	{	
	 printk(KERN_ALERT "mul: %d\n",mul(var1,var2));
	}
	else if(strcmp(option,"sub")==0)
	{
	 printk(KERN_ALERT "sub : %d\n",sub(var1,var2));
	}
	else if(strcmp(option,"div")==0)
	{
	 printk(KERN_ALERT"div :%d\n",div(var1,var2));
	}	
	return 0;
}


static void param_exit(void)
{
	printk(KERN_ALERT "exiting from module");
}

static int add(int var1,int var2)
{
	return (var1+var2);
}

static int mul(int var1,int var2)
{
	return (var1*var2);
}

static int sub(int var1,int var2)
{
	return (var1-var2);
}

static int div(int var1,int var2)
{
	return (var1/var2);
}


module_init(param_init);
module_exit(param_exit);
