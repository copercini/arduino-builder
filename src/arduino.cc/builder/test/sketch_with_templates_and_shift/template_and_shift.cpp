template<> class FastPin<0> : public _ARMPIN<0, 10, 1 << 10, 0> {};; 

template <class SomeType, template <class> class OtherType> class NestedTemplateClass
{
  OtherType<SomeType> f;
};

void printGyro()
{
}
