#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cschema_identifiersType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cschema_identifiersType



namespace cutting_tool_schema_arm
{

namespace exp
{	

class Cschema_identifiersType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT Cschema_identifiersType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT Cschema_identifiersType(Cschema_identifiersType const& init);
	void operator=(Cschema_identifiersType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_exp_altova_Cschema_identifiersType); }
	MemberElement<Cschema_nameType, _altova_mi_exp_altova_Cschema_identifiersType_altova_schema_name> schema_name;
	struct schema_name { typedef Iterator<Cschema_nameType> iterator; };
};



} // namespace exp

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cschema_identifiersType
