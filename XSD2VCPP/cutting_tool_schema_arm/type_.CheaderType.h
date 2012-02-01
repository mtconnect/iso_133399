#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CheaderType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CheaderType



namespace cutting_tool_schema_arm
{

class CheaderType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CheaderType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CheaderType(CheaderType const& init);
	void operator=(CheaderType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CheaderType); }
	MemberElement<exp::Cfile_description, _altova_mi_altova_CheaderType_altova_file_description> file_description;
	struct file_description { typedef Iterator<exp::Cfile_description> iterator; };
	MemberElement<exp::Cfile_name, _altova_mi_altova_CheaderType_altova_file_name> file_name;
	struct file_name { typedef Iterator<exp::Cfile_name> iterator; };
	MemberElement<exp::Cfile_schema, _altova_mi_altova_CheaderType_altova_file_schema> file_schema;
	struct file_schema { typedef Iterator<exp::Cfile_schema> iterator; };
	MemberElement<Cschema_nameType, _altova_mi_altova_CheaderType_altova_schema_name> schema_name;
	struct schema_name { typedef Iterator<Cschema_nameType> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CheaderType
