#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cfile_name
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cfile_name



namespace cutting_tool_schema_arm
{

namespace exp
{	

class Cfile_name : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT Cfile_name(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT Cfile_name(Cfile_name const& init);
	void operator=(Cfile_name const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_exp_altova_Cfile_name); }
	MemberElement<xs::CstringType, _altova_mi_exp_altova_Cfile_name_altova_name> name;
	struct name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_exp_altova_Cfile_name_altova_time_stamp> time_stamp;
	struct time_stamp { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_exp_altova_Cfile_name_altova_author> author;
	struct author { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_exp_altova_Cfile_name_altova_organization> organization;
	struct organization { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_exp_altova_Cfile_name_altova_preprocessor_Version> preprocessor_Version;
	struct preprocessor_Version { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_exp_altova_Cfile_name_altova_originating_system> originating_system;
	struct originating_system { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_exp_altova_Cfile_name_altova_authorisation> authorisation;
	struct authorisation { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};



} // namespace exp

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_exp_ALTOVA_Cfile_name
