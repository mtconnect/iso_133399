#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFileType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFileType2



namespace cutting_tool_schema_arm
{

class CFileType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CFileType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CFileType2(CFileType2 const& init);
	void operator=(CFileType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CFileType2); }
	MemberElement<CPhysical_file, _altova_mi_altova_CFileType2_altova_Physical_file> Physical_file;
	struct Physical_file { typedef Iterator<CPhysical_file> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFileType2
