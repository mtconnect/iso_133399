#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoupling
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoupling



namespace cutting_tool_schema_arm
{

class CCoupling : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCoupling(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCoupling(CCoupling const& init);
	void operator=(CCoupling const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCoupling); }

	MemberAttribute<string_type,_altova_mi_altova_CCoupling_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CCoupling_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CCoupling_altova_Coupling_type> Coupling_type;
	struct Coupling_type { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CPiecesType, _altova_mi_altova_CCoupling_altova_Pieces> Pieces;
	struct Pieces { typedef Iterator<CPiecesType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CCoupling_altova_Side> Side;
	struct Side { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CSizeType, _altova_mi_altova_CCoupling_altova_Size> Size;
	struct Size { typedef Iterator<CSizeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CCoupling_altova_Style> Style;
	struct Style { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoupling
