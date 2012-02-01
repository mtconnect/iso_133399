#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_Cschema_nameType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_Cschema_nameType



namespace cutting_tool_schema_arm
{

class Cschema_nameType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT Cschema_nameType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT Cschema_nameType(Cschema_nameType const& init);
	void operator=(Cschema_nameType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_Cschema_nameType); }
	cutting_tool_schema_arm_EXPORT void operator=(const string_type& value);
	cutting_tool_schema_arm_EXPORT operator string_type();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_Cschema_nameType
