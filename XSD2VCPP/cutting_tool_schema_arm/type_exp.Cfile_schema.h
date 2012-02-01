#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cfile_schema
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cfile_schema



namespace cutting_tool_schema_arm
{

namespace exp
{	

class Cfile_schema : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT Cfile_schema(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT Cfile_schema(Cfile_schema const& init);
	void operator=(Cfile_schema const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_exp_altova_Cfile_schema); }
	MemberElement<exp::Cschema_identifiersType, _altova_mi_exp_altova_Cfile_schema_altova_schema_identifiers> schema_identifiers;
	struct schema_identifiers { typedef Iterator<exp::Cschema_identifiersType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};



} // namespace exp

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cfile_schema
