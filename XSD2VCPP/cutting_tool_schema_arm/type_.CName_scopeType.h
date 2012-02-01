#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CName_scopeType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CName_scopeType



namespace cutting_tool_schema_arm
{

class CName_scopeType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CName_scopeType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CName_scopeType(CName_scopeType const& init);
	void operator=(CName_scopeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CName_scopeType); }
	MemberElement<CPlib_class_reference, _altova_mi_altova_CName_scopeType_altova_Plib_class_reference> Plib_class_reference;
	struct Plib_class_reference { typedef Iterator<CPlib_class_reference> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CName_scopeType
