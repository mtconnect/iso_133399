#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cfile_description
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cfile_description



namespace cutting_tool_schema_arm
{

namespace exp
{	

class Cfile_description : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT Cfile_description(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT Cfile_description(Cfile_description const& init);
	void operator=(Cfile_description const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_exp_altova_Cfile_description); }
	MemberElement<xs::CstringType, _altova_mi_exp_altova_Cfile_description_altova_description> description;
	struct description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_exp_altova_Cfile_description_altova_implementation_level> implementation_level;
	struct implementation_level { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};



} // namespace exp

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cfile_description
